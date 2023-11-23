#include <iostream>

class BankAccount
{
private:
	long account_number;
	std::string name;
	double money;
public:
	explicit BankAccount(/*this*/)	//디폴트 생성자
	{
		this->account_number = 0L;
		(*this).name = "";
		(*this).money = 0.0;
	}															
	BankAccount(const long account_number, std::string name, const double money)	//로컬변수
	{									   //복사 타입(안전함) <->참조타입
		this->account_number = account_number;
		this->name = name;
		this->money = money;
	}
	~BankAccount()	//생성자 오버로딩
	{
		std::cout << "은행을 이용해 주셔서 감사합니다." << std::endl;
		std::cout << this->name << "님의 잔고는 이제 0이 됩니다." << std::endl;
		this->account_number = 0L;
		this->money = 0.0;
		this->name = "";
	}
	double get_money() const
	{
		return this->money;
	}
	double withdraw(double money)//출금
	{	
		if (money < 0)
		{
			std::cout << "음수 입력 불가" << std::endl;
			return this->get_money();
		}
		if (money > this->money)
		{
			std::cout << "잔액보다 큰수는 출력할 수 없습니다." << std::endl;
			return this->get_money();
		}
		this->money -= money;
		return this->money;
	}
	void deposit(double money)//잔액
	{
		if (money < 0)
		{
			std::cout << "음수 입력 불가" << std::endl;
			return;
		}

		this->money += money;
		std::cout << "현재 잔고 : $" << this->get_money() << std::endl;

	}
};

int main()
{	
	class BankAccount charles();					// old style BankAccount(/*this*/) 호출
	//class BankAccount charles { BankAccount() };	// BankAccount(/*this*/) 호출
	BankAccount henry{ BankAccount(1010,"Henry",1000) };
	//henry.money 안되는 이유: private이라서 sol) get_money를 만들어라
	henry.get_money();
	std::cout << henry.get_money() << std::endl;
	henry.withdraw(9000);
	std::cout << henry.get_money() << std::endl;
	henry.deposit(10000);
	return 0;
}