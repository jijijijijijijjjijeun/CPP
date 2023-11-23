#include <iostream>
#include <iomanip>

int main()
{
    double pi = 3.141592;
    int a = 2;
    double square = 1.414213;
    double light = 299792.458000;
    double gravity = 9.806650;
    std::cout  << "원주율은 " << std::fixed << std::setprecision(6) << pi << "이고," << std::endl;
    std::cout << a <<"의 제곱근은 " << std::fixed << std::setprecision(6) << square << "이다." << std::endl;
    std::cout << "빛의 속도는 " << std::fixed << std::setprecision(6) << light << "m/s 이고," << std::endl;
    std::cout << "중력가속도는 " << std::fixed << std::setprecision(6) << gravity << "m/s제곱 입니다." << std::endl;
}
