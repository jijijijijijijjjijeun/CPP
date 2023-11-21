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
	std::cout << "��(�� �� �� ��)�� �� ���Ͻðڽ��ϱ�? : ";
	std::cin >> money;
	std::cout << "�� �� ���� �����ϰڽ��ϱ�? : ";
	std::cin >> year;

	Money investment(money);

	for (int i = 1; i <=  year; i++)
	{
		int futureValue = investment.calcMoney(i);
		std::cout << i << "�� ���� ���ڱ��� " << futureValue << " ���� �Դϴ�." << std::endl;
	}
	return 0;
}