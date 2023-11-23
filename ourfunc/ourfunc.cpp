// ourfunc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void simon(int);
int main()
{
    simon(3);
    std::cout << "정수를 하나 고르시오\n";
    int count;
    std::cin >> count;
    simon(count);
    std::cout << "끝" << std::endl;
    return 0;
}

void simon(int n)
{
    std::cout << "simon 왈, 발가락을 " << n << "번 두드려라" << std::endl;
}

