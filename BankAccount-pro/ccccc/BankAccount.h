#pragma once
#include "BankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>	//ȭ�鿡 ��µǴ� �ܾ�ǥ��(����)
#include <cctype> 
#include <cstdlib>	//system("cls")

class BankAccount
{
private:
	std::string name;
	long long account_number;
	long pin_number;
	long long deposit_money;
	const char* client_class;
	std::string gender;
	long phone_number;
	std::string address;

public:
	BankAccount(std::string name, long long account_number,  long pin_number, long long deposit_money,
				const char* client_class , std::string gender,  long phone_number, std::string address);
	BankAccount();
	~BankAccount();
	double get_money() const;	//�ܾ�
	void now_account();			//���� �ܰ�(��й�ȣ), ��¿�
	void withdraw();			//���(��й�ȣ)
	void deposit();				//�Ա�
	void fine_smae_name();		//�̸����� �˻�
	void find_client_class();	//�����ȸ
	void search_account();		//���·� �˻�
	void find_accout();			//������ ���� ã��
	void show();				//�� ���� �Է�
	void menu();				//�޴�â
};