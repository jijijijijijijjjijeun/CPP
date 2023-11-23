//p.470
#include <iostream>

inline double square(double x)
{
    return x* x;
}

int main()
{
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);

    std::cout << "a = " << a << ", b=" << b << std::endl;
    //std::cout << "c = " << c << ", c의 제곱 = " << square(c++) << std::endl; // c = 14로 나옴
    std::cout << "c = " << c;
    std::cout << ", c의 제곱 = " << square(c++) << std::endl;
    std::cout << "현재 c = " << c << std::endl;
    return 0;
}

