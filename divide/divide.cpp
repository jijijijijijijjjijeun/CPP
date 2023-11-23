// divide.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main(int argc, const char* argv[])
{
    //int wheel = 3 + 4 * 5;//4 5 * 3 +
    //int wheel1 = 20 * 5 + 24 * 6;//20 5 * 24 6 * +

    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << "정수 나눗셈 : 9 / 5 =" << 9.0 / 5 << std::endl;
    std::cout << "부동소수 나눗셈 : 9.0 / 5 =";
    std::cout << 9.0 / 5.0 << std::endl;
    std::cout << "혼합나눗셈 : 9.0 / 5 = " << 9.0 / 5 << std::endl;
    std::cout << "double형 상수 : 1e7f / 9.0f = ";
    std::cout << 1.e7 / 9.0 << std::endl;
    std::cout << "float형 상수 : 1e7f / 9.0f = ";
    std::cout << 1.e7 / 9.0f << std::endl;
    return 0;
}

