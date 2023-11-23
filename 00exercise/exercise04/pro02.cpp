#include <iostream>
#include <iomanip>
#include <cmath>

class Money
{
private:
	int amount;
public:
	Money(int initialAmount) : amount(initialAmount) {}

	double calcMoney(int year)
	{
		return amount * pow(1 + 0.13, year);
	}
};

int main()
{
	int money;
	int year;
	double rate = 0.13;
	std::cout << "얼마(만 원 단 위)를 투 자하시겠습니까? : ";
	std::cin >> money;
	std::cout << "몇 년 동안 투자하겠습니까? : ";
	std::cin >> year;

	Money investment(money);

	for (int i = 1; i <=  year; i++)
	{
		int futureValue = investment.calcMoney(i);
		std::cout << i << "년 뒤의 투자금은 " << futureValue << " 만원 입니다." << std::endl;
	}
	return 0;
}