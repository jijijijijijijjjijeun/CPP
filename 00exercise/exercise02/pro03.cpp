#include <iostream>

int main()
{
	
	int a;
	std::cout << "���ڸ� �Է��ϼ��� : ";
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