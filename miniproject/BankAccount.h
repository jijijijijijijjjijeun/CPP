#pragma once  // 헤더파일에는 선언이나 간단한 정의만 해준다
#include "iostream"
typedef enum _SEX {
	FEMALE,
	MALE,
} SEX;
class BankAccount
{
private:
	static size_t indexer;  // 클래스 변수
	const size_t PASSWORD_COUNT{ 3U };  // instance 변수, 멤버 변수
	size_t length{ 0u };  // instance 변수, 멤버 변수
	std::string account_number;  // instance 변수, 멤버 변수
	std::string name;  // instance 변수, 멤버 변수
	long money;
	std::string address;   // instance 변수, 멤버 변수
	std::string credit_grade;  // instance 변수, 멤버 변수
	SEX sex;  // SEX type  // instance 변수, 멤버 변수
	char password[BUFSIZ]{ 0 };  // instance 변수, 멤버 변수,512자리 암호, 패스워드 배열
public:
	BankAccount() = default;
	BankAccount(const std::string&, const std::string&, long&, const std::string&, const SEX&);
	BankAccount(const BankAccount&);  // 복사 생성자
	~BankAccount();  // 소멸자
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

	static void set_indexer(const size_t);  // 클래스가 호출이 되면 
	static size_t get_indexer();

	void input_password();
};