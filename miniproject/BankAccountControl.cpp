#include "BankAccountControl.h"
void BankAccountControl::add_account_bank(const BankAccount& bank)
{
	this->_vec.push_back(bank);
}

void BankAccountControl::input_account_bank(BankAccount& bank_accont)
{
	//�����͸� �Է� �ޱ� ���� �Է� ���� ����� (�ӽ� string)
	std::string buffer;
	long buffer1;
	std::cout << "���¹�ȣ �Է� : ";
	std::cin >> buffer;
	bank_accont.set_account_number(buffer);
	std::cout << "�̸� �Է� : ";
	std::cin >> buffer;
	bank_accont.set_name(buffer);
	std::cout << "���� �Է� : ";
	std::cin >> buffer;
	bank_accont.set_money(buffer1);
	std::cout << "�ּ� �Է� : ";
	std::cin >> buffer;
	bank_accont.set_address(buffer);
	std::cout << "���� �Է�{F(0)/M(1)} : ";
	int _sex{ 0 };
	std::cin >> _sex;
	bank_accont.set_sex(static_cast<SEX>(_sex));
	std::cout << "��ȣ �Է� : ";
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
				std::cout << "���� �޴��Դϴ� " << std::endl;
		}
		++ptr_iter;
		std::cout << "----------------------------------------------------------------------------" << std::endl;
	}
}