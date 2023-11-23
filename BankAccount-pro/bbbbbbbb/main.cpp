#include "BankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>	//화면에 출력되는 잔액표현(서식)
#include <cctype> 
#include <cstdlib>	//system("cls")

int main()
{
	int user = 0;
	while (1) {
		std::cout << "고객 수를 입력하세요 : ";
		if (std::cin >> user)
		{
			std::cin.get();
			if (user < 3)
			{
				std::cout << "※3명이상으로 고객수를 설정해 주세요※" << std::endl;
			}
			else if (user >= 0) {
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

	BankAccount* client = new BankAccount[user];

	for (int i = 0; i < user; ++i)
	{
		client[i].show();
	}

	std::cout << "**********************************************고객의 은행 업무 시작********************************************" << std::endl;

	while (1)
	{
		BankAccount::menu();
		int ch;
		std::cin >> ch;
		if (ch == 1)
		{
			BankAccount::deposit(client, user);
		}
		else if (ch == 2)
		{
			BankAccount::withdraw(client, user);
		}
		else if (ch == 3)
		{
			BankAccount::now_account(client, user);
		}
		else if (ch == 4)
		{
			BankAccount::fine_smae_name(client, user);
		}
		else if (ch == 5)
		{
			BankAccount::find_client_class(client, user);
		}
		else if (ch == 6)
		{
			BankAccount::search_account(client, user);
		}
		else if (ch == 7)
		{
			BankAccount::find_accout(client, user);
		}
		else if (ch == 8)
		{
			BankAccount::find_max_deposit(client, user);
		}
		else if (ch == 9)
		{
			break;
		}
		else
		{
			std::cout << "하고자 하는 은행 업무를 다시 선택해 주세요" << std::endl;
		}
	}
	delete[] client;

	//객체가 소멸될 때 출력할 메세지
	std::cout << "은행을 이용해 주셔서 감사합니다." << std::endl;
	std::cout << "**********************************************고객의 은행 업무 종료*********************************************" << std::endl;
	return 0;
}