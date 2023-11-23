#include <iostream>

int main()
{
    int* ptr = nullptr; //나는 이름은 ptr이고 int형 데이터를 가르킵니다
    int *ptr = nullptr; //나는 ptr포인터 입니다
    int * ptr = nullptr; // 표준
    int value1 = 100;       //offset
    double value2 = 200.0;       //복사연산자가 발생
    //&value1;                //주소도 숫자, 값도 숫자
    //int result1 = value1;    //100
    //int * ptr_result2 = &value1;    //무슨 값인지 실행해야 알 수 있다    
    //int* (*ptr_result2) = &ptr_result2;
    int* ptr_value1 = nullptr; // 주소가 0 인것을 받음
    double * ptr_value2 = nullptr;
    ptr_value1 = &value1;   //정수형 타입
    ptr_value2 = &value2;
    //*ptr_value;
    *ptr_value1 = -100;   //value1 = -100이랑 같다.
    *ptr_value2 = -200.10;
    sizeof value1;              //4
    sizeof value2;              //8
    sizeof ptr_value1;          //8
    sizeof ptr_value2;          //8
    sizeof (ptr_value1 + 1);    //8 , 주소값 더하는것, 8byte
    sizeof ptr_value2 + 1;      //9
    ptr_value1 = nullptr;
    ptr_value2 = nullptr;
}