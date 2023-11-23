#include <iostream>
#include <cstring>   //#include <string.h>

int main()
{
    std::string str1 {"panther"};
    const char* str2{ "panda" };
    char str3[]{ "panda" };
    int len1 = str1.size();    
    int len2 = strlen(str2);

    std::cout << len1 << std::endl;              //7  ,string class는 NULL문자 미포함
    std::cout << len2 << std::endl;             //5  ,len 함수는 NULL문자를 제거하고 세어줌
    std::cout << sizeof str1 << std::endl;      //40  ,class의 사이즈
    std::cout << sizeof str2 << std::endl;      //8   ,64bit 운영체제, 포인터의 사이즈?
                                                //4   ,32bit 운영체제일 때
    std::cout << sizeof str3 << std::endl;      //6
                                                //class의 크기를 보려면 sizeof가 아니라 len 함수를 사용해야 한다
}

