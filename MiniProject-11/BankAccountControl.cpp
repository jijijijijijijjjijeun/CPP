#pragma once
#include"opencv2/opencv.hpp" // iostream포함
#include "BankAccountControl.h"

void BankAccountControl::add_account_bank(const BankAccount& bank)
{
	this->_vec.push_back(bank);
}

static const cv::String model = "res10_300x300_ssd_iter_140000_fp16.caffemodel";
static const cv::String config = "deploy.prototxt";

void BankAccountControl::input_account_bank(BankAccount& bank_account)
{
	std::string buffer;

	// 계좌 정보 입력
	std::cout << "계좌번호 입력: ";
	std::cin >> buffer;
	bank_account.set_account_number(buffer);

	std::cout << "이름 입력: ";
	std::cin >> buffer;
	bank_account.set_name(buffer);

	std::cout << "성별 입력 (F:0 / M:1): ";
	int _sex{ 0 };
	std::cin >> _sex;
	bank_account.set_sex(static_cast<SEX>(_sex));

	std::cout << "암호 입력: ";
	bank_account.input_password();

	// 얼굴 인식
	std::cout << "얼굴인식을 시작합니다" << std::endl;

	cv::VideoCapture capture(0);
	if (!capture.isOpened())
	{
		std::cerr << "카메라 작동 불가" << std::endl;
		return;
	}

	cv::dnn::Net net = cv::dnn::readNet(model, config);
	if (net.empty())
	{
		std::cerr << "네트워크를 열 수 없음" << std::endl;
		return;
	}

	cv::Mat frame;
	cv::namedWindow("FRAME");
	int capture_counter = 0;
	while (true)
	{
		capture >> frame;
		cv::Mat blob = cv::dnn::blobFromImage(frame, 1.0, cv::Size(300, 300), cv::Scalar(104, 177, 123));
		net.setInput(blob);
		cv::Mat result = net.forward();
		cv::Mat detect(result.size[2], result.size[3], CV_32FC1, result.ptr<float>());

		for (int i = 0; i < detect.rows; ++i)
		{
			float confidence = detect.at<float>(i, 2);
			if (confidence < 0.7)
				continue;

			int x1 = cvRound(detect.at<float>(i, 3) * frame.cols);
			int y1 = cvRound(detect.at<float>(i, 4) * frame.rows);
			int x2 = cvRound(detect.at<float>(i, 5) * frame.cols);
			int y2 = cvRound(detect.at<float>(i, 6) * frame.rows);

			cv::rectangle(frame, cv::Rect(cv::Point(x1, y1), cv::Point(x2, y2)), cv::Scalar(0, 0, 255));

			cv::Mat face = frame(cv::Rect(cv::Point(x1, y1), cv::Point(x2, y2)));

			if (!face.empty() && capture_counter < 16)
			{
				std::string filename = "C:/code/CPP/OpenCv/opencv_project/face/captured_face_" + std::to_string(capture_counter) + ".jpg";
				cv::imwrite(filename, face);
				std::cout << "캡처된 얼굴을 저장했습니다: " << filename << std::endl;
				capture_counter++;
			}
		}

		cv::imshow("FRAME", frame);
		char key = cv::waitKey(1000);
		if (key == 'q')
		{
			cv::destroyAllWindows();
			break;
		}
		else if (key == 'a')
		{
			std::string filename = "C:/code/CPP/OpenCv/opencv_project/face/captured_frame_" + std::to_string(capture_counter) + ".jpg";
			cv::imwrite(filename, frame);
			std::cout << "캡처된 프레임을 저장했습니다: " << filename << std::endl;
			capture_counter++;
		}
	}

	cv::destroyAllWindows();

	// 이미지 처리 및 그리드 생성
	std::vector<cv::Mat> imgs;
	cv::Size targetSize(100, 100);
	for (int i = 0; i < 16; i++)
	{
		std::string filename = "C:/code/CPP/OpenCv/opencv_project/face/captured_face_" + std::to_string(i) + ".jpg";
		cv::Mat img = cv::imread(filename);

		if (img.empty())
		{
			std::cerr << "이미지를 읽어오는데 실패했습니다: " << filename << std::endl;
			return;
		}

		cv::resize(img, img, targetSize);
		imgs.push_back(img);
	}

	cv::Mat gridImage = cv::Mat::zeros(targetSize.height * 4, targetSize.width * 4, imgs[0].type());
	int index = 0;

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			if (index >= imgs.size())
				break;

			cv::Mat roi = gridImage(cv::Rect(col * targetSize.width, row * targetSize.height, targetSize.width, targetSize.height));
			imgs[index].copyTo(roi);

			index++;
		}
	}

	cv::imwrite("C:/code/CPP/OpenCv/opencv_project/face/grid_image.jpg", gridImage);
	cv::imshow("Grid Image", gridImage);
	cv::waitKey();
}

void BankAccountControl::search_account_bank()
{
	std::cout << "0 - Account number, 1 - Account name, 2 - Account address, 3 - Account credit , 4 - Deoposit, 5 - Withdraw !!" << std::endl;
	int menu_number;
	std::cin >> menu_number;
	if (menu_number >= 0 and menu_number <= 5)
	{
		std::vector<BankAccount>::iterator ptr_iter{ this->_vec.begin() };
		while (ptr_iter != _vec.end())
		{
			switch (static_cast<MENU>(menu_number))
			{
			case ACCOUNT_NUMBER:
				std::cout << ptr_iter->get_account_number() << std::endl;
				break;
			case ACCOUNT_NAME:
				std::cout << ptr_iter->get_name() << std::endl;
				break;
			case ACCOUNT_ADDRESS:
				std::cout << ptr_iter->get_address() << std::endl;
				break;
				//
			case ACCOUNT_CREDIT:
				std::cout << ptr_iter->get_credit_grade() << std::endl;
				break;
			case ACCOUNT_DEPOSIT:
				this->deposit();
				return;
				//메뉴 따로 만드는게 좋을것 같다.
			case ACCOUNT_WITHDRAW:
				this->withdraw();
				return;
			default:
				std::cout << "메뉴를 다시 선택해주세요" << std::endl;
			}
			++ptr_iter;
			std::cout << "-------------------------" << std::endl;
		}
	}
	else
	{
		std::cout << "메뉴를 다시 선택해주세요" << std::endl;
	}
}

#include <conio.h>
void BankAccountControl::deposit() {
	std::vector<BankAccount>::iterator ptr_iter{ this->_vec.begin() };
	std::string buffer;
	std::cout << "계좌 번호를 입력해주세요.  ";
	std::cin >> buffer;
	char password[BUFSIZ]{ '\0' };
	int size{ 0 };
	char ch{ '\0' };
	while (ptr_iter != _vec.end())
	{
		const std::string customer_account_number { ptr_iter->get_account_number() };
		if (buffer == customer_account_number) {
			do
			{
				std::cout << "패스워드를 입력해주세요.  ";
				while ((ch = _getch()) != '\r')
				{
					std::cout << "*"; // 화면에 별이 출력
					password[size++] = ch;
				}
				std::cout << std::endl;
				password[size] = '\0'; // 3번체크
			} while (!ptr_iter->check_password(password));
			std::cout << "입금할 금액을 입력해주세요.  ";
			double _money;
			std::cin >> _money;
			while (_money <= 0) {
				std::cout << "잘 못 입력했습니다." << std::endl;
				std::cout << "입금할 금액을 입력해주세요.  ";
				std::cin >> _money;
			}
			ptr_iter->set_blance(_money);
			break;
		}
		++ptr_iter;
	}
}

void BankAccountControl::withdraw() 
{
	std::vector<BankAccount>::iterator ptr_iter{ this->_vec.begin() };
	std::string buffer;
	std::cout << "계좌 번호를 입력해주세요.  ";
	std::cin >> buffer;
	char password[BUFSIZ]{ '\0' };
	int size{ 0 };
	char ch{ '\0' };
	bool result = false;
	int false_counting = 0;
	while (ptr_iter != _vec.end())
	{
		const std::string customer_account_number{ ptr_iter->get_account_number() };
		if (buffer == customer_account_number) {
			do
			{
				std::cout << "패스워드를 입력해주세요.  ";
				while ((ch = _getch()) != '\r')
				{
					std::cout << "*"; // 화면에 별이 출력
					password[size++] = ch;
				}
				std::cout << std::endl;
				password[size] = '\0'; // 3번체크
				result = ptr_iter->check_password(password);
				if (!result)
				{
					++false_counting;
				}						//3
				if (false_counting >= BankAccount::PASSWORD_COUNT)
				{
					std::cout << "패스워드 초과" << std::endl;
					return;
				}
			} while (!result);
			std::cout << "찾을 금액을 입력해주세요.  ";
			double _money;
			std::cin >> _money;
			while (_money <= 0) {
				std::cout << "잘 못 입력했습니다." << std::endl;
				std::cout << "찾을 금액을 입력해주세요.  ";
				std::cin >> _money;
			}
			ptr_iter->get_blance(_money);
			break;
		}
		++ptr_iter;
	}

}