#include<iostream>

int main()
{
	int a = 10;
	++a;	// 11
	a++;	//12
	std::cout << a << std::endl;
	int b = a++ + 10;  //22
	std::cout << b << std::endl;
	return 0;
}
