#include <iostream>

int main()
{
	int x, y, z;
	std::cout << "3개의 숫자를 입력하세요 : ";
	std::cin >> x >> y >> z;
	int total = 0;
	double average = 0.0;
	total = x + y + z;
	std::cout << "총합은  : " << total << std::endl;
	average = total / 3.0;
	std::cout << "평균은  : " << average << std::endl;
	return 0;
}
