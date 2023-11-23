#include "BankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>	//ȭ�鿡 ��µǴ� �ܾ�ǥ��(����)
#include <cctype> 
#include <cstdlib>	//system("cls")

BankAccount::BankAccount()	//������: �ʱⰪ ����
{
	this->name = "";
	this->account_number = 0L;
	this->pin_number = 0L;
	this->deposit_money = 0.0;
	this->client_class = 0;
	this->gender = "";
	this->phone_number = 0L;
	this->address = "";
}	  //�ʱ�ȭ
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
BankAccount::~BankAccount()	//�Ҹ���
{
	//��ü�� �Ҹ�� �� �ʱ�ȭ
	this->name = "";
	this->account_number = 0L;
	this->pin_number = 0L;
	this->deposit_money = 0.0;
	this->client_class = 0;
	this->gender = "";
	this->phone_number = 0L;
	this->address = "";
}
double BankAccount::get_money() 	//�ܾ�
{
	return this->deposit_money;		//�ܾ����� ��ȯ
}
std::string BankAccount::get_name()
{
	return this->name;
}
void BankAccount::find_max_deposit(BankAccount* client, int user)
{
	long long max = client[0].get_money();
	std::string name;
	int i;
	for (i = 1; i < user; i++)
	{
		if (max < client[i].get_money())
		{
			max = client[i].get_money();
			name = client[i].get_name();
		}
	}
	std::cout << "���� ���� �ְ� �ݾ� : $" << std::fixed << std::setprecision(0) << max << std::endl;	//�ܾ� ��½� ���� ����
}
void BankAccount::now_account(BankAccount* client, int user)	//�����ܾ���ȸ(��й�ȣ : ���ڸ�(����x),3����)
{
	std::string name;
	std::cout << "ã�� �� ������ �Է��Ͻÿ� : ";
	std::cin >> name;
	int i;
	for (i = 0; i < user; i++)
	{
		if (client[i].name == name)
			break;
	}
	long password;
	int cnt = 0;

	while (cnt < 3)
	{
		std::cout << "password�� �Է��ϼ��� : ";
		if (std::cin >> password)
		{
			if (password >= 0)
			{
				if (client[i].pin_number == password)
				{
					std::cout << "���� �ܰ� : $";
					std::cout << std::fixed << std::setprecision(0) << client[i].get_money() << std::endl;
					break;
				}
				else
				{
					cnt++;
					std::cout << "********Ʋ�Ƚ��ϴ�." << "(" << cnt << "ȸ Ʋ��)********" << std::endl;
				}
			}
			else
			{
				std::cout << "������ �Է� �Ұ���" << std::endl;
			}
		}
		else
		{
			std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;
			std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //�߸��� �Է��� ���ۿ��� ����
		}

		if (cnt >= 3)
		{
			std::cout << "password 3ȸ ���� => �ܾ���ȸ �Ͻ� �� �����ϴ�." << std::endl;
			break;
		}
	}
}
void BankAccount::withdraw(BankAccount* client, int user)	//���(���� x),��й�ȣ : ���ڸ�(����x),3����
{
	std::string name;
	std::cout << "ã�� �� ������ �Է��Ͻÿ� : ";
	std::cin >> name;
	int i;
	for (i = 0; i < user; i++)
	{
		if (client[i].name == name)
			break;
	}
	long password;
	int cnt = 0;

	while (cnt < 3)
	{
		std::cout << "password�� �Է��ϼ��� : ";
		if (std::cin >> password)
		{
			if (password >= 0)
			{
				if (client[i].pin_number == password)
				{
					double withdraw_amount;
					std::cout << "����� �ݾ��� �Է��ϼ��� : $";
					if (std::cin >> withdraw_amount)
					{
						if (withdraw_amount < 0)
						{
							std::cout << "������ �Է� �Ұ���" << std::endl;
						}
						else if (withdraw_amount > client[i].deposit_money)
						{
							std::cout << "�ܾ׺��� ū �ݾ��� ����� �� �����ϴ�." << std::endl;
						}
						else
						{
							client[i].deposit_money -= withdraw_amount;
							std::cout << "���� �ܰ� : $" << std::fixed << std::setprecision(0) << client[i].get_money() << std::endl;

							if (client[i].deposit_money >= 200000000)	// ��� �� ��� ������
							{
								client[i].client_class = "1";
							}
							else if (client[i].deposit_money >= 100000000)
							{
								client[i].client_class = "2";
							}
							else if (client[i].deposit_money >= 50000000)
							{
								client[i].client_class = "3";
							}
							else
							{
								client[i].client_class = "�Ϲ�";
							}
							break;
						}
					}
					else
					{
						std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;		//��ݾ�
						std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //�߸��� �Է��� ���ۿ��� ����
					}
				}
				else
				{
					cnt++;
					std::cout << "Ʋ�Ƚ��ϴ�." << "(" << cnt << "ȸ Ʋ��)" << std::endl;
				}
			}
			else
			{
				std::cout << "������ �Է� �Ұ���" << std::endl;
			}
		}
		else
		{
			std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;		//password
			std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //�߸��� �Է��� ���ۿ��� ����
		}
	}

	if (cnt >= 3)
	{
		std::cout << "password 3ȸ ���� => ����Ͻ� �� �����ϴ�." << std::endl;
	}
}
void BankAccount::deposit(BankAccount* client, int user)		//�Ա�(���� x,��� ������)
{
	std::string name;
	std::cout << "ã�� �� ������ �Է��Ͻÿ� : ";
	std::cin >> name;
	int i;
	for (i = 0; i < user; i++)
	{
		if (client[i].name == name)
			break;
	}
	double deposit_money;
	std::cout << "�Ա��� �ݾ��� �Է��ϼ��� : $";
	std::cin >> deposit_money;
	if (deposit_money < 0)
	{
		std::cout << "������ �Է� �Ұ���" << std::endl;
		return;
	}
	std::cout << "���� �ܰ� : $";
	while (1)
	{
		if (deposit_money >= 0)
		{
			if (client[i].deposit_money >= 200000000)	//�Ա��ϰ� ���� �ݾ����� ��� ������
			{
				client[i].client_class = "1";
			}
			else if (client[i].deposit_money >= 100000000)
			{
				client[i].client_class = "2";
			}
			else if (client[i].deposit_money >= 50000000)
			{
				client[i].client_class = "3";
			}
			else
			{
				client[i].client_class = "�Ϲ�";
			}
			break;
		}
		else
		{
			std::cout << "������ �Է� �Ұ���" << std::endl;
		}

	}
	client[i].deposit_money += deposit_money;
	std::cout << std::fixed << std::setprecision(0) << client[i].get_money() << std::endl;	//�ܾ� ��½� ���� ����
}
void BankAccount::fine_smae_name(BankAccount* client, int user)		//�̸����� ������ ����ϱ�
{
	std::cout << "ã�� �� ������ �Է��Ͻÿ� : ";
	while (1)
	{
		std::string name;
		std::cin >> name;
		int i;
		for (i = 0; i < user; i++)
		{
			if (client[i].name == name)
				break;
		}
		if (client[i].name == name)
		{
			std::cout << "ã���ô� ������ 1�� �����Դϴ�." << std::endl;
			std::cout << "�� ���� : " << client[i].name << std::endl;
			std::cout << "�� ���¹�ȣ : " << client[i].account_number << std::endl;
			std::cout << "�� �ܾ� : $" << std::fixed << std::setprecision(0) << client[i].get_money() << std::endl;
			std::cout << "�� ��� : " << client[i].client_class << "���" << std::endl;
			std::cout << "�� ��ȭ��ȣ : " << client[i].phone_number << std::endl;
			std::cout << "�� �� �ּ� : " << client[i].address << std::endl;
			break;
		}
		else
		{
			std::cout << "���� ���࿡ �Է��Ͻ� ������ ���� ������ �������� �ʽ��ϴ�." << std::endl;
			std::cout << "�ٽ� �� ������ �Է��Ͻÿ� : ";
		}
	}
}
void BankAccount::find_client_class(BankAccount* client, int user)		//����� ���
{
	std::string name;
	std::cout << "ã�� �� ������ �Է��Ͻÿ� : ";
	std::cin >> name;
	int i;
	for (i = 0; i < user; i++)
	{
		if (client[i].name == name)
			break;
	}
	if (client[i].deposit_money >= 200000000)
	{
		client[i].client_class = "1";
		std::cout << "�ڡڡ�1��� ���Դϴ�.�ڡڡ�" << std::endl;
	}
	else if (client[i].deposit_money >= 100000000)
	{
		client[i].client_class = "2";
		std::cout << "�ڡ�2��� ���Դϴ�.�ڡ�" << std::endl;
	}
	else if (client[i].deposit_money >= 50000000)
	{
		client[i].client_class = "3";
		std::cout << "��3��� ���Դϴ�.��" << std::endl;
	}
	else
	{
		client[i].client_class = "�Ϲ�";
		std::cout << "�Ϲݵ�� ���Դϴ�." << std::endl;
	}
}
void BankAccount::search_account(BankAccount* client, int user)	//���¹�ȣ�� ������ ����ϱ�(����x, ���ڸ� ����)
{
	long long account_number;
	std::cout << "ã�� ���¹�ȣ�� �Է��Ͻÿ� : ";
	std::cin >> account_number;
	int i;
	for (i = 0; i < user; i++)
	{
		if (client[i].account_number == account_number)
			break;
	}
	
		if (account_number >= 0)
		{
			if (client[i].account_number == account_number)
			{
				std::cout << "�� ���� : " << client[i].name << std::endl;
				std::cout << "�� ���¹�ȣ : " << client[i].account_number << std::endl;
				std::cout << "�� �ܾ� : $" << std::fixed << std::setprecision(0) << client[i].get_money() << std::endl;
				std::cout << "�� ��� : " << client[i].client_class << "���" << std::endl;
				std::cout << "�� ��ȭ��ȣ : " << client[i].phone_number << std::endl;
				std::cout << "�� �� �ּ� : " << client[i].address << std::endl;
			}
			else
			{
				std::cout << "���� ���࿡ �Է��Ͻ� ���¹�ȣ�� ���� ������ �������� �ʽ��ϴ�." << std::endl;
				std::cout << "�ٽ� ���¹�ȣ�� �Է��Ͻÿ� : ";
			}
		}
		else
		{
			std::cout << "������ �Է� �Ұ���" << std::endl;
			std::cout << "�ٽ� ���¹�ȣ�� �Է��Ͻÿ� :" << std::endl;
		}
}
void BankAccount::find_accout(BankAccount* client, int user)		//�̸�, ��ȭ��ȣ(����x, ���ڸ� ����), ���ּҷ� �̸��� ���¹�ȣ ���
{
	int ch;
	std::cout << "1.�̸����� ���¹�ȣ ã��" << std::endl;
	std::cout << "2.��ȭ��ȣ�� ���¹�ȣ ã��" << std::endl;
	std::cout << "3.���ּҷ� ���¹�ȣ ã��" << std::endl;
	std::cin >> ch;

	if (ch == 1)
	{
		std::string name;
		std::cout << "ã�� ���� ������ �Է��Ͻÿ� : ";
		std::cin >> name;
		int i;
		for (i = 0; i < user; i++)
		{
			if (client[i].name == name)
				break;
		}
		while (1)
		{
			if (client[i].name == name)
			{
				std::cout << "ã���ô� ������ 1�� �����Դϴ�." << std::endl;
				std::cout << "�� ���� : " << client[i].name << std::endl;
				std::cout << "�� ���¹�ȣ : " << client[i].account_number << std::endl;
				break;
			}
			else
			{
				std::cout << "���� ���࿡ �Է��Ͻ� ������ ���� ������ �������� �ʽ��ϴ�." << std::endl;
				std::cout << "�ٽ� �� ������ �Է��Ͻÿ� : ";
				std::cin >> name;
			}
		}

	}
	else if (ch == 2)
	{
		long phone_number;
		std::cout << "ã���� ���� ��ȭ��ȣ�� �Է����ּ��� : ";
		std::cin >> phone_number;
		int i;
		for (i = 0; i < user; i++)
		{
			if (client[i].phone_number == phone_number)
				break;
		}
		while (1)
		{
			if (std::cin >> phone_number)
			{
				if (phone_number >= 0)
				{
					if (client[i].phone_number == phone_number)
					{
						std::cout << "ã���ô� ������ 1�� �����Դϴ�." << std::endl;
						std::cout << "�� ���� : " << client[i].name << std::endl;
						std::cout << "�� ���¹�ȣ : " << client[i].account_number << std::endl;
						break;
					}
					else
					{
						std::cout << "���� ���࿡ �Է��Ͻ� ��ȭ��ȣ�� ���� ������ �������� �ʽ��ϴ�." << std::endl;
						std::cout << "�ٽ� �� ��ȭ��ȣ�� �Է��Ͻÿ� : ";
					}
				}
				else
				{
					std::cout << "������ �Է� �Ұ���" << std::endl;
				}
			}
			else
			{
				std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;
				std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //�߸��� �Է��� ���ۿ��� ����
			}

		}
	}
	else if (ch == 3)
	{
		std::string address;
		std::cout << "ã���� ���� �ּҸ� �Է����ּ��� : ";
		std::cin >> address;
		int i;
		for (i = 0; i < user; i++)
		{
			if (client[i].address == address)
				break;
		}

		while (1)
		{
			if (client[i].address == address)
			{
				std::cout << "ã���ô� ������ 1�� �����Դϴ�." << std::endl;
				std::cout << "�� ���� : " << client[i].name << std::endl;
				std::cout << "�� ���¹�ȣ : " << client[i].account_number << std::endl;
				break;
			}
			else
			{
				std::cout << "���� ���࿡ �Է��Ͻ� �ּҸ� ���� ������ �������� �ʽ��ϴ�." << std::endl;
				std::cout << "�ٽ� �ּҸ� �Է��Ͻÿ� : ";
				std::cin >> address;
			}
		}
	}
	else
	{
		std::cout << "1 ~ 3 ������ ���ڸ� �Է����ּ���." << std::endl;
	}
}
void BankAccount::show()		//���� ���� �Է¹ޱ�
{
	std::cout << "���� ����(���� ����)  \t\t:";
	std::cin >> name;

	while (1) {
		std::cout << "���� ���¹�ȣ(���ڸ� �Է�)  \t\t:";		//����x, ���ڸ� ����
		if (std::cin >> account_number) {
			if (account_number >= 0) {
				break;
			}
			else {
				std::cout << "������ �Է� �Ұ���" << std::endl;
			}
		}
		else {
			std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;
			std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		 //�߸��� �Է��� ���ۿ��� ����
		}
	}

	while (1) {
		std::cout << "���� ��й�ȣ(���ڸ� �Է�)  \t\t:";		//����x, ���ڸ� ����
		if (std::cin >> pin_number) {
			if (pin_number >= 0) {
				break;
			}
			else {
				std::cout << "������ �Է� �Ұ���" << std::endl;
			}
		}
		else {
			std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;
			std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//�߸��� �Է��� ���ۿ��� ����
		}
	}

	while (1) {
		std::cout << "���� ����(���ڸ� �Է�)  \t\t:$";		//����x, ���ڸ� ����
		if (std::cin >> deposit_money) {
			if (deposit_money >= 0) {
				if (this->deposit_money >= 200000000)		//��� �ʱ� ����
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
					this->client_class = "�Ϲ�";
				}
				break;
			}
			else {
				std::cout << "������ �Է� �Ұ���" << std::endl;
			}
		}
		else {
			std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;
			std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//�߸��� �Է��� ���ۿ��� ����
		}
	}

	while (1)
	{
		std::cout << "���� ����(male, female�� �Է�)  \t:";
		std::cin >> gender;
		if (gender == "male" || gender == "female")
		{
			break;
		}
		else
		{
			std::cout << "male�� female�θ� �Է����ּ���" << std::endl;
		}
	}

	while (1) {
		std::cout << "���� ��ȭ��ȣ(���ڸ� �Է�)  \t\t:";		//����x, ���ڸ� ����
		if (std::cin >> phone_number) {
			if (phone_number >= 0) {
				break;
			}
			else {
				std::cout << "������ �Է� �Ұ���" << std::endl;
			}
		}
		else {
			std::cout << "�ؼ��ڷθ� �Է����ּ����" << std::endl;
			std::cin.clear();	//�Է� ��Ʈ���� �����ϰ� => ���ѷ����� �����°��� ����
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//�߸��� �Է��� ���ۿ��� ����
		}
	}

	std::cout << "���� ���ּ�(���� ����)  \t\t:";
	std::cin >> address;
	system("cls");		//�ܼ�â clear
}
void BankAccount::menu()
{
	std::cout << "------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "|                                                                                                          |" << std::endl;
	std::cout << "|                        1.�Ա�  2.���   3.�ܾ� ��ȸ �ϱ�  4.�̸�ã��  5.��� ��ȸ                        |" << std::endl;
	std::cout << "|                      6.�����˻�(���¹�ȣ)  7.���°˻�(����)  8.�ְ�ݾ� ã��  9.����                     |" << std::endl;
	std::cout << "|                                                                                                          |" << std::endl;
	std::cout << "------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "������ ���� ��ȣ�� �Է��ϼ��� :";
}