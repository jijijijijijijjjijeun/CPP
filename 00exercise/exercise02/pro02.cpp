#include <iostream>

int main()
{
	while (1)
	{
		int a, b, c;
		std::cout << "�� ������ �Է��ϼ��� : ";
		std::cin >> a >> b >> c;
		if (a % 2 == 0)
		{
			std::cout << a << std::endl;
		}
		if (b % 2 == 0)
		{
			std::cout << b << std::endl;
		}
		if (c % 2 == 0)
		{
			std::cout << c << std::endl;
		}
	}
}