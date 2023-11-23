//p.280
#include <iostream>

int main()
{
	double price[] = { 4.99,10.99,6.87,7.99 };
	for (auto& item : price)
	{
		std::cout << item << "\t";
		item = item * 100;//변경 불가
	}
	std::cout << std::endl;
	for (auto item : price)
	{
		std::cout << item << "\t";
		item = item * 100;
	}
	std::cout << std::endl;
}