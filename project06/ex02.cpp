#include <iostream>
int main()
{
	double donation[10];
	double total = 0.0;
	double average = 0.0;
	std::cout << "Enter donation : " << std::endl;
	int i;
	for (i = 0; i < 5; i++)
	{
		std::cin >> donation[i];
		total = total + donation[i];
	}
	std::cout << donation[i] << "\t" << std::endl;
	average = total / 5.0;
	std::cout << average << std::endl;
	return 0;
}