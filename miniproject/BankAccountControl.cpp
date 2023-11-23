#include "BankAccountControl.h"
void BankAccountControl::add_account_bank(const BankAccount& bank)
{
	this->_vec.push_back(bank);
}

void BankAccountControl::input_account_bank(BankAccount& bank_accont)
{
	//데이터를 입력 받기 위한 입력 버퍼 만들기 (임시 string)
	std::string buffer;
	long buffer1;
	std::cout << "계좌번호 입력 : ";
	std::cin >> buffer;
	bank_accont.set_account_number(buffer);
	std::cout << "이름 입력 : ";
	std::cin >> buffer;
	bank_accont.set_name(buffer);
	std::cout << "예금 입력 : ";
	std::cin >> buffer;
	bank_accont.set_money(buffer1);
	std::cout << "주소 입력 : ";
	std::cin >> buffer;
	bank_accont.set_address(buffer);
	std::cout << "성별 입력{F(0)/M(1)} : ";
	int _sex{ 0 };
	std::cin >> _sex;
	bank_accont.set_sex(static_cast<SEX>(_sex));
	std::cout << "암호 입력 : ";
	bank_accont.input_password();
	std::cout << "----------------------------------------------------------------------------" << std::endl;
}

void BankAccountControl::search_account_bank()
{
	std::cout << "0 - Account number, 1 - Account name, 2 - Account address, 3 - Account credit" << std::endl;
	int menu_number;
	std::cin >> menu_number;
	std::vector<BankAccount>::iterator ptr_iter{this->_vec.begin()};
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
			case ACCOUNT_CREDIT:
				std::cout << ptr_iter->get_credit_grade() << std::endl;
				break;
			default:
				std::cout << "없는 메뉴입니다 " << std::endl;
		}
		++ptr_iter;
		std::cout << "----------------------------------------------------------------------------" << std::endl;
	}
}