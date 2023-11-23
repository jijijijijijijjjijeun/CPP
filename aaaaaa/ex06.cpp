#include <iostream>

void make_swap_value(int& value_a, int& value_b)
{
	int temp_value = 0;
	temp_value = value_a;
	value_a = value_b;
	value_b = temp_value;

}

int main()
{
	int value_a = 10;
	int value_b = 20;

	std::cout << value_a << std::endl;
	std::cout << value_b << std::endl;

	std::cout << std::endl;
	make_swap_value(value_a, value_b);

	std::cout << value_a << std::endl;
	std::cout << value_b << std::endl;

}