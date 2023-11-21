#include <iostream>

int main()
{
	int a;
	std::cout << "정수를 입력하세요 : ";
	std::cin >> a;
	for (int i = 0; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}