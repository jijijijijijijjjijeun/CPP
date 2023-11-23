// morechar.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    char ch = 'M';
    int i = ch;
    std::cout << ch << "의 아스키 코드는 " << i << "입니다." << std::endl;
    std::cout << "이 문자 코드에 1을 더해보겠습니다" << std::endl;
    ch = ch + 1;
    i = ch;
    std::cout << ch << "의 아스키 코드는 " << i << "입니다." << std::endl;

    std::cout << "cout.put(ch)를 사용해서 char형 변수 ch를 화면에 출력: ";
    std::cout.put(ch);
    std::cout.put('!');
    std::cout << std::endl << "종료" << std::endl;
    return 0;
}
