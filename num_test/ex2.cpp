#include <iostream>

int main()
{
	;       //null����(null statement)
	int x;
	std::cout << (x = 100) << std::endl;	//(x = 100) : ǥ����(expression)
	std::cout << (x < 3) << std::endl;
	10 > 3;
	3 == 3;
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << (x > 3) << std::endl;
}
