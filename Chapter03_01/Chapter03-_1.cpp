// Chapter03-_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <climits>

int main()
{
    short dohee = SHRT_MAX;
    std::cout << dohee << std::endl;
    dohee = dohee + 1;
    std::cout << dohee << std::endl;
}
