#include <iostream>

double myabs(double a)
{
	double result;
	if (a < 0)
	{
		result = -1.0 * a;
	}
	else
	{
		result = a ;
	}
	return result;
}
int main()
{
	double number;
	while (true)
	{
		std::cout << "숫자를 입력하세요 : ";
		std::cin >> number;
		if (number == 0)
		{
			std::cout << "프로그램을 종료 합니다." << std::endl;
			break;
		}
		else
		{
			std::cout << myabs(number) << std::endl;
		}
	}
}