#include <iostream>

int main()
{   
    int i = 0;
	for (; i < 50; i++)
	{
		if (i % 2 == 0) continue;
		{
			std::cout << i << "  Hello World" << std::endl;
		}
	}
	return 0;
}