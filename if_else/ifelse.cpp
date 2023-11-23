//p.311
#include <iostream>

int main()
{
	char ch;
	std::cout << "타이핑 하시면, 반복수행 하겠습니다. " << std::endl;
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
		{
			std::cout << ch;
		}
		else
		{
			std::cout << ch++;
		}
		std::cin.get(ch);
		//std::cout << "혼란스럽게 해서 죄송합니다." << std::endl;
		//std::cin.get();
		//std::cin.get();
	}
	return 0;
}