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
	BankAccount(std::string name, long long account_number, long pin_number, long long deposit_money,
				const char* client_class, std::string gender, long phone_number, std::string address);
	BankAccount();
	~BankAccount();
	double get_money();	//�ܾ�
	std::string get_name();
	static void now_account(BankAccount* client, int user);			//���� �ܰ�(��й�ȣ), ��¿�
	static void find_max_deposit(BankAccount* client, int user);			//�ִ�ݾ� ã��
	static void withdraw(BankAccount* client, int user);			//���(��й�ȣ)
	static void deposit(BankAccount* client, int user);				//�Ա�
	static void fine_smae_name(BankAccount* client, int user);		//�̸����� �˻�
	static void find_client_class(BankAccount* client, int user);	//�����ȸ
	static void search_account(BankAccount* client, int user);		//���·� �˻�
	static void find_accout(BankAccount* client, int user);			//������ ���� ã��
	void show();	//�� ���� �Է�
	static void menu();		//�޴�â
};