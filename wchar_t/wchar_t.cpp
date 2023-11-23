// wchar_t.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    wchar_t char1 = L'A';
    const char* ptr_char = "ABC"; //문자열 쓸떄 앞에 const붙여라, 수정 어차피 안됌
    const wchar_t* ptr_char2{ L"ABC" };
  /*  std::string str_1 {"ABC"};
    std::string str_2 = str_1 + "DEF";*/
    char16_t uni1{ u'Q' };
    char32_t uni2{ U'\U0000222B' }; //=>인테그랄∫
    std::cout << uni2 << std::endl;


    //bool타입
    bool value{ false };//true 1byte => unsigned char
    //의문문형?
    //동사+주어 => 직접의문문
    bool isReady = false;
    isReady = true;
    std::cout << isReady << std::endl;
    std::cout << std::boolalpha;
    std::cout << isReady << std::endl;
}