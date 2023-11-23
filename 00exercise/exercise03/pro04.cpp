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
		std::cout << "두 개 숫자를 입력하세요 : ";
		std::cin >> a >> b;
		if (a != 0 && b != 0)
		{
			std::cout << "입력한 숫자 " << a << " " << b << "의 최대공약수는 " << gcd(a, b) << "입니다." << std::endl;
		}
		else
		{
			std::cout << "프로그램을 종료합니다." << std::endl;
		}
		
	}
}
	