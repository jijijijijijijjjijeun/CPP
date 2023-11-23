#include "BankAccount.h"  

size_t BankAccount::indexer{0u};  // Ŭ���� ���� �ʱ�ȭ 

BankAccount::BankAccount(const std::string& account_number, const std::string& name, long& money,
    const std::string& address, const SEX& sex) :
    account_number(account_number), name(name), address(address), sex(sex)
{
    ++BankAccount::indexer;
}

BankAccount::BankAccount(const BankAccount& rhs) :
    account_number(rhs.account_number),
    name(rhs.name), address(rhs.address),
    credit_grade(rhs.credit_grade),
    sex(sex)
{
    strcpy_s(this->password, BUFSIZ, rhs.password);
    ++BankAccount::indexer;
}

BankAccount::~BankAccount()
{
    --BankAccount::indexer;
}

const std::string& BankAccount::get_account_number() const
{
    return this->account_number;
}

const std::string& BankAccount::get_name() const
{
    return this->name;
}

const std::string& BankAccount::get_address() const
{
    return this->address;
}

const std::string& BankAccount::get_credit_grade() const
{
    return this->credit_grade;
}

const SEX& BankAccount::get_sex() const
{
    return this->sex;
}

void BankAccount::set_indexer(const size_t indexer)
{
    BankAccount::indexer = indexer;
}

size_t BankAccount::get_indexer()
{
    return BankAccount::indexer;
}

void BankAccount::set_account_number(const std::string& _account_number)
{
    this->account_number = _account_number;
}

void BankAccount::set_name(const std::string& _name)
{
    this->name = _name;
}

void BankAccount::set_money(long& _money)
{
    this->money = _money;
}

void BankAccount::set_address(const std::string& _address)
{
    this->address = _address;
}

void BankAccount::set_credit_grade(const std::string& _credit_grade)
{
    //this->credit_grade = _credit_grade;
    
    if (this->money > 5000)
    {
        this->credit_grade = "1���";
    }
    else if (this->money > 2500)
    {
        this->credit_grade = "2���";
    }
    else
    {
        this->credit_grade = "�Ϲݵ��";
    }
}

void BankAccount::set_sex(const SEX& sex)
{
    this->sex = sex;
}
// �ֿܼ��� ����� �ϱ� ���� ���� �Ѱ��� �ް� �ϴ� �Լ����� �ʿ���
#include <conio.h>
void BankAccount::input_password()
{
    int size{ 0 };
    char ch{ '\0' };
    while ((ch = _getch()) != '\r')
    {
        std::cout << "*";  // ȭ�鿡 ���� ���
        this->password[size++] = ch;
    }
    std::cout << std::endl;
     this->password[size] = '\0';
    ///std::cout << password << std::endl;
}