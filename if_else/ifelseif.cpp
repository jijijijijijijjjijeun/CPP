//p.314
#include <iostream>

const int favorite_number = 27;

int main()
{
	int num;

	std::cout << "1 ~ 100���� �������� �ϳ��� ���� ���ߴ� �����Դϴ�." << std::endl;
	std::cout << "what is my favorite number? : ";
	do
	{
		std::cin >> num;
		if (num < favorite_number)
		{
			std::cout << "Input more bigger : " ;
		}
		else if (num > favorite_number)
		{
			std::cout << "Input more small : " ;

		}
		else
		{
			std::cout << "The answer is " << favorite_number << std::endl;
		}

	} while (num != favorite_number);
	return 0;
}