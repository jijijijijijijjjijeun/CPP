#include <iostream>

int main()
{
	
	int a;
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << "X ";
		}
		else
		{
			std::cout << i << " ";
		}
	}
	
}