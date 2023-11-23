#include <iostream>
#include "String.h"

int main()
{
    String str1 = String("Hello");
    std::cout << str1 << std::endl;
    String  str2 = String("Android");
    std::cout << str2 << std::endl;
    String str3 = str1 + str2;  //st1과 str2의 크기를 합친것 만큼의 메모리를 만들고 복사해서 던져준다
    std::cout << str3 << std::endl;

}
