#include <iostream>

int main()
{
    std::cout << "math score : ";
    int point = 0;
    std::cin >> point;
    if (point >= 90)
    {
        std::cout << "A" << std::endl;
    }
    else if (point >= 80)
    {
        std::cout << "B" << std::endl;
    }
    else if (point >= 70)
    {
        std::cout << "C" << std::endl;
    }
    else if (point >= 60)
    {
        std::cout << "D" << std::endl;
    }
    else 
    {
        std::cout << "F" << std::endl;
    }
}
