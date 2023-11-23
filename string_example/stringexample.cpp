#include <iostream>

int main()
{
    std::string str1 = "Hello World";       //string class 생성                             ,NULL문자가 안붙음
    std::string str2 = "Nice to meet you";  //                                              ,NULL문자가 안붙음
    const char* str3 = "Welcome";           //const 안쓰면 오류                             ,NULL문자가 붙음
    char str4[] = {"Android"};              //[ ] 위치 주의                                 ,NULL문자가 붙음
    const char* str5 = str1.c_str();        //c_str :  옛날 c스타일로 바꿔라, 클래스 아님   ,NULL문자가 붙음
    std::cout << str1 << std::endl;         //class이기에 str1.  치면 뒤에 함수(메소드: 멤버함수) 나옴
    std::cout << str2 << std::endl;         //str1.c_str()  => ()해줘야함
    std::cout << str3 << std::endl;
    std::cout << str4 << std::endl;
    std::cout << str5 << std::endl;
    std::cout << str1 + " " + str2 << std::endl;      //원본이 수정x, 단지 붙여서 출력할 뿐, string class에서는 내부연산 시간이 오래 걸림
    std::cout << str1.at(0) << std::endl;             //0번째 문자만 출력 = 'H'
    str1 += str2;                                     //str1 = str1 + str2 , update, 원본이 수정된다
    std::cout << str1 << std::endl;
}