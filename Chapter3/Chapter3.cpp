// Chapter3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <climits>
#define CDS_PIN 30                                   //상수화 오래된 스타일
//O.O.P -> Object Oriented Programing(객체지향 프로그래밍)
int main() 
{
    //사용자 위주
    //in python
    //value_value: int = 10.0      //int x float로 자동 인식함
    //in java, JS, kotlin, swift,Csharp
    //var value_vale = 10;        //var x int로 자동 인식
    //in c++
    //auto value_vale = 10;       //auto가 int로 인식
    //in c
    //auto value_vale = 10;       //auto를 로컬변수로 인식, 전역에서 쓰면 안된다.

    const uint8_t LED_PIN{ 30U };
    int n_value = INT_MIN;
    int value_a = 10;
    char value_b = static_cast<char>(10);           //C++
    std::cout << n_value << std::endl;
    long long n_llong = LLONG_MAX;    
    long n_long = 100L;                             //100L or (long)100
    std::cout << n_llong << std::endl;

    std::cout << sizeof(n_llong) << std::endl;      //sizeof함수일까? no연산자임
    std::cout << sizeof(n_long) << std::endl;

    int wrens(400);
    int wrens2{ 200 };
    int wrens3 = int(300);

    int value_a = 10;                       //C++에서는 변수x,객체o
    int value_b{ 10 };                      //객체화 하겠다.
    int values[] = { 0 };                   //클래스 데이터, 복합령 데이터
    //integer value_a = integer (10);       //java에서 , 클래스 데이터, 복합령 데이터

    int valueOfhuman{ 10 };                 //java스타일,  camel스타일
    int value_human{ 10 };                  //python스타일,snake스타일
}