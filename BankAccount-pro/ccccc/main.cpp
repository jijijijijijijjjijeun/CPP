#include "BankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>	//화면에 출력되는 잔액표현(서식)
#include <cctype> 
#include <cstdlib>	//system("cls")

int main()
{
	BankAccount client1;
	client1.show();
	std::cout << "#1번 고객님" << std::endl;
	std::cout << "***********************************************고객의 은행 업무 시작**********************************************" << std::endl;
	
	while (1)
	{
		client1.menu();
		int ch;
		std::cin >> ch;
		if (ch == 1)
		{
			client1.deposit();
		}
		else if (ch == 2)
		{
			client1.withdraw();
		}
		else if (ch == 3)
		{
			client1.now_account();
		}
		else if (ch == 4)
		{
			client1.fine_smae_name();
		}
		else if (ch == 5)
		{
			client1.find_client_class();
		}
		else if (ch == 6)
		{
			client1.search_account();
		}
		else if (ch == 7)
		{
			client1.find_accout();
		}
		else if (ch == 8)
		{
			break;
		}
		else
		{
			std::cout << "하고자 하는 은행 업무를 다시 선택해 주세요" << std::endl;
		}
	}
	return 0;
}