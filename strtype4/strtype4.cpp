#include <iostream>
#include <string>
#include <cstring>

int main()
{
    char charr[20];
    std::string str;
    std::cout << "입력 이전에 charr에 있는 문자열의 길이 : " << strlen(charr) << std::endl;
    std::cout << "입력 이전에 str에 있는 문자열의 길이 : " << str.size() << std::endl;
    std::cout << "텍스트 한 행을 입력하시오" << std::endl;
    std::cin.getline(charr, 20);
    std::cout << "입력한 텍스트 : " << charr << std::endl;
    std::cout << "또 다른 한 행을 입력하시오" << std::endl;
    std::getline(std::cin, str);
    std::cout << "입력 이후에 charr에 있는 문자열의 길이 : " << strlen(charr) << std::endl;
    std::cout << "입력 이후에 str에 있는 문자열의 길이 : " << str.size() << std::endl;
    return 0;
}
