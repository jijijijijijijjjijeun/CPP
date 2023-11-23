#include <iostream>

int main()
{
	;       //null문장(null statement)
	int x;
	std::cout << (x = 100) << std::endl;	//(x = 100) : 표현식(expression)
	std::cout << (x < 3) << std::endl;
	10 > 3;
	3 == 3;
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << (x > 3) << std::endl;
}
