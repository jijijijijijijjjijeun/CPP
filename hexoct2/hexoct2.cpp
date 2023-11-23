// hexoct2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#include <iostream>

int main()
{
    int chest = { 42 };
    int waist = { 42 };
    int inseam = { 42 };

    std::cout << std::dec;
    std::cout << "chest   " << chest << std::endl;
    std::cout << std::hex;
    std::cout << "waist   " << waist << std::endl;
    std::cout << std::oct;
    std::cout << "inseam  " << inseam << std::endl;
}

