//p.338
#include <iostream>

enum COLOR { red, orange, yellow, green, blue, violet, indigo };

int main()
{
	std::cout << "Input value : ";
	int color = 0;
	std::cin >> color;
	while (1)
	{
		switch (color)
		{
		case red:		//color = 0
			std::cout << "RED" << std::endl;
			break;
		case orange:	//color = 1
			std::cout << "ORANGE" << std::endl;
			break;
		case yellow:	//color = 2
			std::cout << "YELLO" << std::endl;
			break;
		case green:		//color = 3
			std::cout << "Green" << std::endl;
			break;
		case blue:		//color = 4
			std::cout << "BLUE" << std::endl;
			break;
		case violet:	//color = 5
			std::cout << "VIOLET" << std::endl;
			break;
		case indigo:	//color = 6
			std::cout << "INDIGO" << std::endl;
			break;

		default:
			break;
		}
		std::cout << "Input value : ";
		std::cin >> color;
	}
}