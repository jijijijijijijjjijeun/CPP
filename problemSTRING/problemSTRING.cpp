#define _CRT_SECURE_NO_WARNINGS
//p.792,p.793
#include <iostream>
#include<cstring>
#pragma once

class StringBad
{
private:             //접근이 안된다.
    char* str;
    int length;
    static int numbers_object;
public:
    int get_length()
    {
        //this->numbers_object;    //이렇게 하지마세요 틀린 문법입니다.
        StringBad::get_numbers_string;
        return this->length;
     }
    static int get_numbers_string()    
    {   // static 함수는 this가 없어서 인스턴스 변수네 접근할 수 없다.static 변수에만 접근 가능
        //length = 100; //오류 why? this 가 없어서
        //StringBad::number_string = 100;
        //number_string = 100;
        //StringBad::number_string = 10000;
        return StringBad::numbers_object;
    }
    StringBad()
    {
        this->str = new char[BUFSIZ];   //일반적으로 BUFSIZ=512
        this->length = BUFSIZ;
        //StringBad::numbers_object = 0;
        StringBad::numbers_object++;
        std::cout << "객체 개수 : " << StringBad::numbers_object << std::endl;
    }
    StringBad(const char * str)
    {
        this->length = std::strlen(str);
        this->str = new char[length + 1];           //null문자 포함
        strcpy_s(this->str, length + 1,str);        //Hello World! heap에 복사
        StringBad::numbers_object++;
        std::cout << "객체 개수 : " << StringBad::numbers_object << std::endl;
        std::cout << this->str << std::endl;

    }
    ~StringBad()
    {
        delete[]this->str;  ///메모리 누수
        this->length = 0;
        StringBad::numbers_object = 0;
        this->str = nullptr;
    }
    friend std::ostream& operator<<(std::ostream& os, const StringBad& rhs);        //rhs = right hands side

};
int StringBad::numbers_object{0}; //원하는 값으로 초기화 
std::ostream& operator<<(std::ostream& os, const StringBad& rhs)
{
    os << rhs;
    return os;
}
int main()
{
    StringBad string_bad = StringBad();
    StringBad str1 = StringBad("Hello World");
    string_bad.get_length();            //하지마세요
    string_bad.get_numbers_string();    //하지마세요
    std::cout << string_bad << std::endl;
    std::cout << StringBad::get_numbers_string() << std::endl;
    //string_bad.get_numbers_string(); static객체로 접근하는것이라 안된다.
    //string_bad.length = 10;
    //StringBad::number_string = 10;
}