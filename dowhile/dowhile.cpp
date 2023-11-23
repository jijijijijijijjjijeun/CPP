//p.278
#include <iostream>

int main()
{
    std::cout << "input your favorite number : ";
    int number = 0;
    do {
        std::cin >> number;
        std::cout << number << std::endl;
    } while (number != 7);
  
    std::cout << "your favorite number is " << number << std::endl;
}
