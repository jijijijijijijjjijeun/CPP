#include <iostream>

void swap(int& param1, int& param2)  // call by reference
{
	std::cout << (void*)&param1 << std::endl;
	int temporary;
	temporary = param1;
	param1 = param2;
	param2 = temporary;
}


int main()
{
	int code;

	// C++ 많이 쓰세요 -> typename&, // &변수; const -> consteval, constexpr
	int value{ 20 };
	int& ref_value{ value };
	std::cout << value << std::endl;
	std::cout << ref_value << std::endl;
	ref_value = 40;
	std::cout << value << std::endl;

	int value_a = 1000;
	int value_b = 2000;
	std::cout << &value_a << std::endl;
	swap(value_a, value_b);
	std::cout << value_a << std::endl;
	std::cout << value_b << std::endl;
	return 0;

}