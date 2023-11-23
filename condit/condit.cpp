///p.331
#include <iostream>
int main()
{
	int a = 0;
	int b = 0;
	std::cout << "Input two values : ";
	std::cin >> a >> b;
	int max = (a > b ? (a > 0) ? 1 : 0 : b);
	std::cout << "max : " << max << std::endl;

	int min = (a > b ? (b > 0) ? 1 : 0 : a);
	std::cout << "min : " << min << std::endl;

	return 0;
}