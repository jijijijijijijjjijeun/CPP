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
		std::cout << "���ڸ� �Է��ϼ��� : ";
		std::cin >> number;
		if (number == 0)
		{
			std::cout << "���α׷��� ���� �մϴ�." << std::endl;
			break;
		}
		else
		{
			std::cout << myabs(number) << std::endl;
		}
	}
}