#include <iostream>

int main()
{
    int sec;
    std::cout << "초를 입력하세요 : ";
    std::cin >> sec;
    int m = sec / 60;
    int s = sec % 60;
    std::cout << m << " 분 " << s << " 초 " << std::endl;
}
