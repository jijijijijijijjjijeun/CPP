// floating.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main(int argc, const char* argv[])
{
    //부동소숫점, floating 정확하지 않다.
    //소수점 부정확해서 사용할 때 조심해야 합니다.
    //소주점 비교연산 하지 마세여
    //float 쓰지 말고, 안전하게 double
    //2.52e8 = 2.52 * 10^8
    //2.52 * 100000000 = 25200000000
    double value = static_cast < double>(10) / 3; //10 3
    int value1 = 10;
    int value2 = 3;
    int result = value1 * value2;
    std::cout << value << std::endl;
    double tub = 10.0 / 3.0;
}

