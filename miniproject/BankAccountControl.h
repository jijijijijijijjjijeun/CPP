#pragma once
#include "BankAccount.h"
#include <vector> //���Ĵٵ� ���̺귯�� -> java : API => Android Phone
typedef enum _MENU
{
	ACCOUNT_NUMBER,
	ACCOUNT_NAME,
	ACCOUNT_ADDRESS,
	ACCOUNT_CREDIT
}MENU;
class BankAccountControl
{
private:
	std::vector<BankAccount> _vec;
	MENU menu;
public:
	BankAccountControl() = default;
	void add_account_bank(const BankAccount&);
	void search_account_bank();
	void input_account_bank(BankAccount&);
};

