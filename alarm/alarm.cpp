// alarm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    char alarm = '\a';
    std::cout << alarm << "틀렸습니다\a\n";
    std::cout << "정답은 a입니다.\n";
}