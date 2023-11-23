// typecast.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int auks, bats, coots;
    auks = 199.99 + 11.99;
    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    std::cout << "바다오리 = " << auks << ",박쥐 = " << bats;
    std::cout << ", 검둥오리 = " << coots << std::endl;
    char ch = 'Z';
    std::cout << "코드 " << ch << " 의 값은 ";
    std::cout << int(ch) << std::endl;
    std::cout << "네, 코드 Z의 값은 ";
    std::cout << static_cast<int>(ch) << std::endl;
    return 0;
}

