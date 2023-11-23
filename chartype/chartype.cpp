// chartype.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    char ch = '\0'; //(char)0으로  초기화
                    //' ' => 아스키 코드로 숫자로 바꿈
                    //'\r' = 13
                    //'0' = 48
    std::cout << "문자한개 입력 : ";
    std::cin >> ch;
    std::cout << "입력하신 문자 한개는 " << ch << "입니다," << std::endl;
    std::cout << "이름을 입력하세요 :  ";
    std::string name = "";
    std::cin >> name;
    std::cout << "당신의 이름은 " << name << "입니다," << std::endl;
}
