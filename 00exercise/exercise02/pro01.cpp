#include <iostream>

int main()
{
	while (1)
	{
		int a, b;
		std::cout << "두 정수를 입력하세요 : ";
		std::cin >> a >> b;
		if (a > b)
		{
			std::cout << "1" << std::endl;
		}
		else
		{
			std::cout << "0" << std::endl;
		}
	}
}