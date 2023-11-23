#pragma once
#include"opencv2/opencv.hpp" // iostream����
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

	// ���� ���� �Է�
	std::cout << "���¹�ȣ �Է�: ";
	std::cin >> buffer;
	bank_account.set_account_number(buffer);

	std::cout << "�̸� �Է�: ";
	std::cin >> buffer;
	bank_account.set_name(buffer);

	std::cout << "���� �Է� (F:0 / M:1): ";
	int _sex{ 0 };
	std::cin >> _sex;
	bank_account.set_sex(static_cast<SEX>(_sex));

	std::cout << "��ȣ �Է�: ";
	bank_account.input_password();

	// �� �ν�
	std::cout << "���ν��� �����մϴ�" << std::endl;

	cv::VideoCapture capture(0);
	if (!capture.isOpened())
	{
		std::cerr << "ī�޶� �۵� �Ұ�" << std::endl;
		return;
	}

	cv::dnn::Net net = cv::dnn::readNet(model, config);
	if (net.empty())
	{
		std::cerr << "��Ʈ��ũ�� �� �� ����" << std::endl;
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
				std::cout << "ĸó�� ���� �����߽��ϴ�: " << filename << std::endl;
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
			std::cout << "ĸó�� �������� �����߽��ϴ�: " << filename << std::endl;
			capture_counter++;
		}
	}

	cv::destroyAllWindows();

	// �̹��� ó�� �� �׸��� ����
	std::vector<cv::Mat> imgs;
	cv::Size targetSize(100, 100);
	for (int i = 0; i < 16; i++)
	{
		std::string filename = "C:/code/CPP/OpenCv/opencv_project/face/captured_face_" + std::to_string(i) + ".jpg";
		cv::Mat img = cv::imread(filename);

		if (img.empty())
		{
			std::cerr << "�̹����� �о���µ� �����߽��ϴ�: " << filename << std::endl;
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
				//�޴� ���� ����°� ������ ����.
			case ACCOUNT_WITHDRAW:
				this->withdraw();
				return;
			default:
				std::cout << "�޴��� �ٽ� �������ּ���" << std::endl;
			}
			++ptr_iter;
			std::cout << "-------------------------" << std::endl;
		}
	}
	else
	{
		std::cout << "�޴��� �ٽ� �������ּ���" << std::endl;
	}
}

#include <conio.h>
void BankAccountControl::deposit() {
	std::vector<BankAccount>::iterator ptr_iter{ this->_vec.begin() };
	std::string buffer;
	std::cout << "���� ��ȣ�� �Է����ּ���.  ";
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
				std::cout << "�н����带 �Է����ּ���.  ";
				while ((ch = _getch()) != '\r')
				{
					std::cout << "*"; // ȭ�鿡 ���� ���
					password[size++] = ch;
				}
				std::cout << std::endl;
				password[size] = '\0'; // 3��üũ
			} while (!ptr_iter->check_password(password));
			std::cout << "�Ա��� �ݾ��� �Է����ּ���.  ";
			double _money;
			std::cin >> _money;
			while (_money <= 0) {
				std::cout << "�� �� �Է��߽��ϴ�." << std::endl;
				std::cout << "�Ա��� �ݾ��� �Է����ּ���.  ";
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
	std::cout << "���� ��ȣ�� �Է����ּ���.  ";
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
				std::cout << "�н����带 �Է����ּ���.  ";
				while ((ch = _getch()) != '\r')
				{
					std::cout << "*"; // ȭ�鿡 ���� ���
					password[size++] = ch;
				}
				std::cout << std::endl;
				password[size] = '\0'; // 3��üũ
				result = ptr_iter->check_password(password);
				if (!result)
				{
					++false_counting;
				}						//3
				if (false_counting >= BankAccount::PASSWORD_COUNT)
				{
					std::cout << "�н����� �ʰ�" << std::endl;
					return;
				}
			} while (!result);
			std::cout << "ã�� �ݾ��� �Է����ּ���.  ";
			double _money;
			std::cin >> _money;
			while (_money <= 0) {
				std::cout << "�� �� �Է��߽��ϴ�." << std::endl;
				std::cout << "ã�� �ݾ��� �Է����ּ���.  ";
				std::cin >> _money;
			}
			ptr_iter->get_blance(_money);
			break;
		}
		++ptr_iter;
	}

}