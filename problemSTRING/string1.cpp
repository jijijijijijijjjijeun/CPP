//p.826
#include <iostream>
#include <cstring>
#pragma once

class StringBad
{
private:
    char* str;
    int length;
    static int number_object;       //디폴트 생성자에서 생성되는 객체
public:
    int get_length()
    {
        /*std::cout << this->get_numbers_string << std::endl;*/ // 잘못된 문법 사용 x
        StringBad::get_numbers_string;
        return this->length;
    }
    static int get_numbers_string()
        //static 함수는 this가 없어서
        //인스턴스 변수에 접근할 수 없다.
        //static 변수에만 접근할 수 있다.
    {
        //StringBad::number_string = 10'000;
        return StringBad::number_object;
    }

    StringBad() //객체 인스턴스 생성
    {
        this->str = new char[BUFSIZ]; //system size 512
        this->length = BUFSIZ;
        //StringBad::number_object = 0; //0으로 세팅
        StringBad::number_object++;
        std::cout << "객체 개수 : " << StringBad::number_object << std::endl;

    }
    StringBad(const char* str)
    {
        this->length = std::strlen(str);
        this->str = new char[length + 1]; //'\0'
        strcpy_s(this->str, length + 1, str);
        StringBad::number_object++;
        std::cout << "객체 개수 : " << StringBad::number_object << std::endl;

        std::cout << this->str << std::endl;
    }
    StringBad(const StringBad& rhs) //깊은 복사
    {
        std::cout << "copy constructor" << std::endl;
        StringBad::number_object++;//객체 하나 만들었다
        this->length = rhs.length;
        this->str = new char[length + 1];
        strcpy_s(this->str, length + 1, rhs.str);
        std::cout << this->str << std::endl;
    }
    StringBad& operator=(const StringBad& rhs)//원본을 지우고 대입연산자 실행하기 위해
    {
        if (this == &rhs)    //rhs의 주소와 같다면
        {
            return *this;   //잘못해서 나한테 나를 넣는 경우를 방지 하기 위해  str3 = str3 같은 경우
        }
        std::cout << "Assignment Operator called" << std::endl;
        delete[] this->str; //나 자신을 날리는것 = 내가 가리키고 있는 주소를 지워야 함
        this->length = rhs.length;
        this->str = new char[length + 1];
        strcpy_s(this->str, length + 1, rhs.str);
        std::cout << this->str << std::endl;
        return *this;       //객체로 가세요
    }
    ~StringBad() //소멸자
    {
        std::cout << "~StringBad()" << std::endl;
        StringBad::number_object--;
        std::cout << "객체 개수 : " << StringBad::number_object << std::endl;
        delete[]this->str; //메모리 누수
        this->length = 0;
        //StringBad::number_object = 0;
        this->str = nullptr;
    }

    friend std::ostream& operator<<(std::ostream& os, const StringBad& rhs);
};

int StringBad::number_object {0};//초기화
std::ostream& operator<<(std::ostream& os, const StringBad& rhs)
{
    os << rhs;
    return os;
}



int main()
{
    StringBad str1 = StringBad("Hello world"); //StringBad("Hello world");
    StringBad str2(str1);                      //복사 생성자, = StringBad str2 = StringBad(str1), 얕은 복사 => 깊은 복사를 해야함(복사 생성자)

    StringBad str3 = "Android";
    //str3 = str3;      //StringBad& operator=(const StringBad& rhs) 대입 연산자
    str3 = str2;        //연산자 오버로드, 복사연산자
    return 0;

}