//p.311
#include <iostream>

int main()
{
	char ch;
	std::cout << "Ÿ���� �Ͻø�, �ݺ����� �ϰڽ��ϴ�. " << std::endl;
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
		//std::cout << "ȥ�������� �ؼ� �˼��մϴ�." << std::endl;
		//std::cin.get();
		//std::cin.get();
	}
	return 0;
}