#include <iostream>


int gcd(int a, int b)
{
	int result;
	if (b == 0)
	{
		result = a;
	}
	else
	{
		result = gcd(b, a % b);
	}
	return result;
}

int main()
{
	int a, b;
	while (1)
	{
		std::cout << "�� �� ���ڸ� �Է��ϼ��� : ";
		std::cin >> a >> b;
		if (a != 0 && b != 0)
		{
			std::cout << "�Է��� ���� " << a << " " << b << "�� �ִ������� " << gcd(a, b) << "�Դϴ�." << std::endl;
		}
		else
		{
			std::cout << "���α׷��� �����մϴ�." << std::endl;
		}
		
	}
}
	