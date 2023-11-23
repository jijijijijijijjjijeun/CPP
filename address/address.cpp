#include <iostream>

int main()
{
    int dounts = 6;
    double cups = 4.5;

    std::cout << "dounts의 값 = " << dounts;
    std::cout << ", dounts의 주소 = " << &dounts << std::endl;

    std::cout << "cups의 값 = " << cups;
    std::cout << ", cups의 주소 = " << &cups << std::endl;
}
