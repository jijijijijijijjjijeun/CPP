#include <iostream>

int main()
{
	int x, y, z;
	std::cout << "3���� ���ڸ� �Է��ϼ��� : ";
	std::cin >> x >> y >> z;
	int total = 0;
	double average = 0.0;
	total = x + y + z;
	std::cout << "������  : " << total << std::endl;
	average = total / 3.0;
	std::cout << "�����  : " << average << std::endl;
	return 0;
}
