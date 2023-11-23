#pragma once  // ������Ͽ��� �����̳� ������ ���Ǹ� ���ش�
#include "iostream"
typedef enum _SEX {
	FEMALE,
	MALE,
} SEX;
class BankAccount
{
private:
	static size_t indexer;  // Ŭ���� ����
	const size_t PASSWORD_COUNT{ 3U };  // instance ����, ��� ����
	size_t length{ 0u };  // instance ����, ��� ����
	std::string account_number;  // instance ����, ��� ����
	std::string name;  // instance ����, ��� ����
	long money;
	std::string address;   // instance ����, ��� ����
	std::string credit_grade;  // instance ����, ��� ����
	SEX sex;  // SEX type  // instance ����, ��� ����
	char password[BUFSIZ]{ 0 };  // instance ����, ��� ����,512�ڸ� ��ȣ, �н����� �迭
public:
	BankAccount() = default;
	BankAccount(const std::string&, const std::string&, long&, const std::string&, const SEX&);
	BankAccount(const BankAccount&);  // ���� ������
	~BankAccount();  // �Ҹ���
	const std::string& get_account_number() const;
	const std::string& get_name() const;
	const std::string& get_address() const;
	const std::string& get_credit_grade() const;
	const SEX& get_sex() const;
	void set_account_number(const std::string&);
	void set_name(const std::string&);
	void set_money(long&);
	void set_address(const std::string&);
	void set_sex(const SEX&);
	void set_credit_grade(const std::string&);

	static void set_indexer(const size_t);  // Ŭ������ ȣ���� �Ǹ� 
	static size_t get_indexer();

	void input_password();
};