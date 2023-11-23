#include "BankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>	//화면에 출력되는 잔액표현(서식)
#include <cctype> 
#include <cstdlib>	//system("cls")

BankAccount::BankAccount()	//생성자: 초기값 설정
{
	this->name = "";
	this->account_number = 0L;
	this->pin_number = 0L;
	this->deposit_money = 0.0;
	this->client_class = 0;
	this->gender = "";
	this->phone_number = 0L;
	this->address = "";
}	  //초기화
BankAccount::BankAccount(std::string name, long long account_number, long pin_number, long long deposit_money,
						const char* client_class, std::string gender, long phone_number, std::string address)
{									  
	this->name = name;
	this->account_number = account_number;
	this->pin_number = pin_number;
	this->deposit_money = deposit_money;
	this->client_class = client_class;
	this->gender = gender;
	this->phone_number = phone_number;
	this->address = address;

}
BankAccount::~BankAccount()	//소멸자
{
	//객체가 소멸될 때 출력할 메세지
	std::cout << "은행을 이용해 주셔서 감사합니다." << std::endl;
	std::cout << "***********************************************고객의 은행 업무 종료**********************************************" << std::endl;
	//객체가 소멸될 때 초기화
	this->name = "";
	this->account_number = 0L;
	this->pin_number = 0L;
	this->deposit_money = 0.0;
	this->client_class = 0;
	this->gender = "";
	this->phone_number = 0L;
	this->address = "";
}
double BankAccount::get_money() const	//잔액
{
	return this->deposit_money;		//잔액정보 반환
}
void BankAccount::now_account()	//현재잔액조회(비밀번호 : 숫자만(음수x),3번만)
{
	long password;
	int cnt = 0;

	while (cnt < 3)
	{
		std::cout << "password를 입력하세요 : ";
		if (std::cin >> password)
		{
			if (password >= 0)
			{
				if (this->pin_number == password)
				{
					std::cout << "현재 잔고 : $";
					std::cout << std::fixed << std::setprecision(0) << get_money() << std::endl;
					break;
				}
				else
				{
					cnt++;
					std::cout << "********틀렸습니다." << "(" << cnt << "회 틀림)********" << std::endl;
				}
			}
			else
			{
				std::cout << "※음수 입력 불가※" << std::endl;
			}
		}
		else
		{
			std::cout << "※숫자로만 입력해주세요※" << std::endl;
			std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //잘못된 입력을 버퍼에서 지움
		}

		if (cnt >= 3)
		{
			std::cout << "password 3회 오류 => 잔액조회 하실 수 없습니다." << std::endl;
			break; 
		}
	}
}
void BankAccount::withdraw()	//출금(음수 x),비밀번호 : 숫자만(음수x),3번만
{
	long password;
	int cnt = 0;

	while (cnt < 3)
	{
		std::cout << "password를 입력하세요 : ";
		if (std::cin >> password)
		{
			if (password >= 0)
			{
				if (this->pin_number == password)
				{
					double withdraw_amount;
					std::cout << "출금할 금액을 입력하세요 : $";
					if (std::cin >> withdraw_amount)
					{
						if (withdraw_amount < 0)
						{
							std::cout << "※음수 입력 불가※" << std::endl;
						}
						else if (withdraw_amount > this->deposit_money)
						{
							std::cout << "잔액보다 큰 금액은 출금할 수 없습니다." << std::endl;
						}
						else
						{
							this->deposit_money -= withdraw_amount;
							std::cout << "현재 잔고 : $" << std::fixed << std::setprecision(0) << get_money() << std::endl;
							
							if (this->deposit_money >= 200000000)	// 출금 후 등급 재조정
							{
								this->client_class = "1";
							}
							else if (this->deposit_money >= 100000000)
							{
								this->client_class = "2";
							}
							else if (this->deposit_money >= 50000000)
							{
								this->client_class = "3";
							}
							else
							{
								this->client_class = "일반";
							}
							break;
						}
					}
					else
					{
						std::cout << "※숫자로만 입력해주세요※" << std::endl;		//출금액
						std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //잘못된 입력을 버퍼에서 지움
					}
				}
				else
				{
					cnt++;
					std::cout << "틀렸습니다." << "(" << cnt << "회 틀림)" << std::endl;
				}
			}
			else
			{
				std::cout << "※음수 입력 불가※" << std::endl;
			}
		}
		else
		{
			std::cout << "※숫자로만 입력해주세요※" << std::endl;		//password
			std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //잘못된 입력을 버퍼에서 지움
		}
	}

	if (cnt >= 3)
	{
		std::cout << "password 3회 오류 => 출금하실 수 없습니다." << std::endl;
	}
}
void BankAccount::deposit()		//입금(음수 x,등급 재조정)
{
	double deposit_money;
	std::cout << "입금할 금액을 입력하세요 : $";
	std::cin >> deposit_money;
	if (deposit_money < 0)
	{
		std::cout << "※음수 입력 불가※" << std::endl;
		return;
	}
	std::cout << "현재 잔고 : $";
	while (1)
	{
		if (deposit_money >= 0)
		{
			if (this->deposit_money >= 200000000)	//입금하고 남은 금액으로 등급 재조정
			{
				this->client_class = "1";
			}
			else if (this->deposit_money >= 100000000)
			{
				client_class = "2";
			}
			else if (this->deposit_money >= 50000000)
			{
				client_class = "3";
			}
			else
			{
				client_class = "일반";
			}
			break;
		}
		else
		{
			std::cout << "※음수 입력 불가※" << std::endl;
		}

	}
	this->deposit_money += deposit_money;
	std::cout << std::fixed << std::setprecision(0) << get_money() << std::endl;	//잔액 출력시 서식 조정
}
void BankAccount::fine_smae_name()		//이름으로 고객정보 출력하기
{
	std::string name;
	std::cout << "찾을 고객 성함을 입력하시오 : ";
	std::cin >> name;
	while (1)
	{
		if (this->name == name)
		{
			std::cout << "찾으시는 고객님은 1번 고객님입니다." << std::endl;
			std::cout << "고객 성함 : " << this->name << std::endl;
			std::cout << "고객 계좌번호 : " << this->account_number << std::endl;
			std::cout << "고객 잔액 : $" << std::fixed << std::setprecision(0) << get_money() << std::endl;
			std::cout << "고객 등급 : " << this->client_class << "등급" << std::endl;
			std::cout << "고객 전화번호 : " << this->phone_number << std::endl;
			std::cout << "고객 집 주소 : " << this->address << std::endl;
			break;
		}
		else
		{
			std::cout << "저희 은행에 입력하신 성함을 가진 고객님은 존재하지 않습니다." << std::endl;
			std::cout << "다시 고객 성함을 입력하시오 : ";
			std::cin >> name;
		}
	}
}
void BankAccount::find_client_class()		//고객등급 출력
{
	if (this->deposit_money >= 200000000)
	{
		this->client_class = "1";
		std::cout << "★★★1등급 고객입니다.★★★" << std::endl;
	}
	else if (this->deposit_money >= 100000000)
	{
		this->client_class = "2";
		std::cout << "★★2등급 고객입니다.★★" << std::endl;
	}
	else if (this->deposit_money >= 50000000)
	{
		this->client_class = "3";
		std::cout << "★3등급 고객입니다.★" << std::endl;
	}
	else
	{
		this->client_class = "일반";
		std::cout << "일반등급 고객입니다." << std::endl;
	}
}
void BankAccount::search_account()	//계좌번호로 고객정보 출력하기(음수x, 숫자만 가능)
{
	long long account_number;
	std::cout << "찾을 계좌번호를 입력하시오 : ";
	while (1)
	{
		if (std::cin >> account_number)
		{
			if (account_number >=0)
			{
				if (this->account_number == account_number)
				{
					std::cout << "찾으시는 고객님은 1번 고객님입니다." << std::endl;
					std::cout << "고객 성함 : " << this->name << std::endl;
					std::cout << "고객 계좌번호 : " << this->account_number << std::endl;
					std::cout << "고객 잔액 : $" << std::fixed << std::setprecision(0) << get_money() << std::endl;
					std::cout << "고객 등급 : " << this->client_class << "등급" << std::endl;
					std::cout << "고객 전화번호 : " << this->phone_number << std::endl;
					std::cout << "고객 집 주소 : " << this->address << std::endl;
					break;
				}
				else
				{
					std::cout << "저희 은행에 입력하신 계좌번호를 가진 고객님은 존재하지 않습니다." << std::endl;
					std::cout << "다시 계좌번호을 입력하시오 : ";
				}
			}
			else
			{
				std::cout << "※음수 입력 불가※" << std::endl;
				std::cout << "다시 계좌번호을 입력하시오 : ";
			}
		}
		else
		{
			std::cout << "※숫자로만 입력해주세요※" << std::endl;
			std::cout << "다시 계좌번호을 입력하시오 : ";
			std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //잘못된 입력을 버퍼에서 지움
		}
	}
}
void BankAccount::find_accout()		//이름, 전화번호(음수x, 숫자만 가능), 집주소로 이름과 계좌번호 출력
{
	int ch;
	std::cout << "1.이름으로 계좌번호 찾기" << std::endl;
	std::cout << "2.전화번호로 계좌번호 찾기" << std::endl;
	std::cout << "3.집주소로 계좌번호 찾기" << std::endl;
	std::cin >> ch;

	if (ch == 1)
	{
		std::string name;
		std::cout << "찾으실 고객의 성함을 입력해주세요 : ";
		std::cin >> name;
		while (1)
		{
			if (this->name == name)
			{
				std::cout << "찾으시는 고객님은 1번 고객님입니다." << std::endl;
				std::cout << "고객 성함 : " << this->name << std::endl;
				std::cout << "고객 계좌번호 : " << this->account_number << std::endl;
				break;
			}
			else
			{
				std::cout << "저희 은행에 입력하신 성함을 가진 고객님은 존재하지 않습니다." << std::endl;
				std::cout << "다시 고객 성함을 입력하시오 : ";
				std::cin >> name;
			}
		}

	}
	else if (ch == 2)
	{
		long phone_number;
		std::cout << "찾으실 고객의 전화번호을 입력해주세요 : ";
		while (1)
		{
			if (std::cin >> phone_number)
			{
				if (phone_number >= 0)
				{
					if (this->phone_number == phone_number)
					{
						std::cout << "찾으시는 고객님은 1번 고객님입니다." << std::endl;
						std::cout << "고객 성함 : " << this->name << std::endl;
						std::cout << "고객 계좌번호 : " << this->account_number << std::endl;
						break;
					}
					else
					{
						std::cout << "저희 은행에 입력하신 전화번호를 가진 고객님은 존재하지 않습니다." << std::endl;
						std::cout << "다시 고객 전화번호를 입력하시오 : ";
					}
				}
				else
				{
					std::cout << "※음수 입력 불가※" << std::endl;
				}
			}
			else
			{
				std::cout << "※숫자로만 입력해주세요※" << std::endl;
				std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //잘못된 입력을 버퍼에서 지움
			}
			
		}
	}
	else if (ch == 3)
	{
		std::string address;
		std::cout << "찾으실 고객의 주소를 입력해주세요 : ";
		std::cin >> address;

		while (1)
		{
			if (this->address == address)
			{
				std::cout << "찾으시는 고객님은 1번 고객님입니다." << std::endl;
				std::cout << "고객 성함 : " << this->name << std::endl;
				std::cout << "고객 계좌번호 : " << this->account_number << std::endl;
				break;
			}
			else
			{
				std::cout << "저희 은행에 입력하신 주소를 가진 고객님은 존재하지 않습니다." << std::endl;
				std::cout << "다시 주소를 입력하시오 : ";
				std::cin >> address;
			}
		}
	}
	else
	{
		std::cout << "1 ~ 3 사이의 숫자를 입력해주세요." << std::endl;
	}
}
void BankAccount::show()		//고객의 정보 입력받기
{
	std::cout << "고객님 성함(띄어쓰기 없이)  \t\t:";	
	std::cin >> name;

	while (1) {
		std::cout << "고객님 계좌번호(숫자만 입력)  \t\t:";		//음수x, 숫자만 가능
		if (std::cin >> account_number) {
			if (account_number >= 0) {
				break;
			}
			else {
				std::cout << "※음수 입력 불가※" << std::endl;
			}
		}
		else {
			std::cout << "※숫자로만 입력해주세요※" << std::endl;
			std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //잘못된 입력을 버퍼에서 지움
		}
	}

	while (1) {
		std::cout << "고객님 비밀번호(숫자만 입력)  \t\t:";		//음수x, 숫자만 가능
		if (std::cin >> pin_number) {
			if (pin_number >= 0) {
				break;
			}
			else {
				std::cout << "※음수 입력 불가※" << std::endl;
			}
		}
		else {
			std::cout << "※숫자로만 입력해주세요※" << std::endl;
			std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//잘못된 입력을 버퍼에서 지움
		}
	}

	while (1) {
		std::cout << "고객님 예금(숫자만 입력)  \t\t:$";		//음수x, 숫자만 가능
		if (std::cin >> deposit_money) {
			if (deposit_money >= 0) {
				if (this->deposit_money >= 200000000)		//등급 초기 생성
				{
					this->client_class = "1";	
				}
				else if (this->deposit_money >= 100000000)
				{
					this->client_class = "2";
				}
				else if (this->deposit_money >= 50000000)
				{
					this->client_class = "3";
				}
				else
				{
					this->client_class = "일반";
				}
				break;
			}
			else {
				std::cout << "※음수 입력 불가※" << std::endl;
			}
		}
		else {
			std::cout << "※숫자로만 입력해주세요※" << std::endl;
			std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//잘못된 입력을 버퍼에서 지움
		}
	}

	while (1)
	{
		std::cout << "고객님 성별(male, female로 입력)  \t:";
		std::cin >> gender;
		if (gender == "male"|| gender == "female")
		{
			break;
		}
		else
		{
			std::cout << "male과 female로만 입력해주세요" << std::endl;
		}
	}

	while (1) {
		std::cout << "고객님 전화번호(숫자만 입력)  \t\t:";		//음수x, 숫자만 가능
		if (std::cin >> phone_number) {
			if (phone_number >= 0) {
				break;
			}
			else {
				std::cout << "※음수 입력 불가※" << std::endl;
			}
		}
		else {
			std::cout << "※숫자로만 입력해주세요※" << std::endl;
			std::cin.clear();	//입력 스트림을 복구하고 => 무한루프에 빠지는것을 예방
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//잘못된 입력을 버퍼에서 지움
		}
	}

	std::cout << "고객님 집주소(띄어쓰기 없이)  \t\t:";
	std::cin >> address;
	system("cls");		//콘솔창 clear
}
void BankAccount::menu()
{
	std::cout << "---------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|                                                                                                             |" << std::endl;
	std::cout << "| 1.입금  2.출금   3.잔액 조회 하기  4.이름찾기  5.등급 조회  6.정보검색(계좌번호)  7.계좌검색(정보)  8.종료  |" << std::endl;
	std::cout << "|                                                                                                             |" << std::endl;
	std::cout << "---------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "업무를 보실 번호를 입력하세요 :";
}