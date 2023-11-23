//p.254
#include <iostream>

int main()
{
    std::cout << "input 5 value" << std::endl;
    double number;
    double sum = 0.0;
    for (int i = 1; i < 6; i++)
    {
        std::cout << "value : " << i << " : ";
        std::cin >> number;
        sum = sum + number;
    }
    std::cout << "sum = " << sum << std::endl;
    std::cout << "avg= " << sum/5 << std::endl;
}
