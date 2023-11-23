#include "bank.h"
#include <iostream>

int main()
{
    //class Stock stock;
    //class Stock stock();
    //class Stock stock{Stock() };
    Stock();  //이거 안쓸 경우 컴파일러가 자동으로 만들어서 컴파일 함 
    //1.내가 만든 Default 생 성자
    //2.소멸자
    class Stock stock = Stock();              //객체가 만들어 진다, Stock():디폴드 생성자
    //3.내가 만든 Default 생성자
    //10.소멸자
    stock.acquire("LUX", 1000L, 20000.0);//private에 접근하려면 바로는 안되고 메소드를 통해 접근해야 한다.
    stock.show();
    Stock karl;
    //4.내가 만든 Default 생성자
    //9.소멸자
    karl.acquire("SAMSUNG", 10L, 60000);
    karl.show();
    Stock brian = Stock("LG", 1000L, 200000);
    //5.내가 만든 Default 생성자
    //8.소멸자
    Stock yuna("Hyundai", 1000L, 200000);
    //6.내가 만든 Default 생성자
    //7.소멸자

    brian.topvalue(/*this*/yuna);//  /*this*/ = brain

    int a = 100;
    std::cout << a << std::endl;    //이런연산 불가능 사용자가 만들어 줘야 함
    //karl + brian = 불가능 why?사용자 정의 데이터(객체)라서 ,구조체도 안된다. 

    return 0;
}