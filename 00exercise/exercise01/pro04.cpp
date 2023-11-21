#include <iostream>

int main()
{
    int a, b;
    std::cout << "두 개의 수를 입력하세요 : ";
    std::cin >> a >> b;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << (double)(a*1.0 / b) << std::endl;
}
