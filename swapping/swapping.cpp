#include <iostream>

void swapping_value(int value_a, int value_b)           //call by value ,  원본 값이 훼손될수도 있음
{
    int temp_value = 0;
    temp_value = value_a;
    value_a = value_b;
    value_b = temp_value;
}
void swapping_point(int* value_a, int* value_b)         //call by point  ,  주소 값이 훼손될수도 있음
{
    int temp_value = 0;
    temp_value = *value_a;
    *value_a = *value_b;
    *value_b = temp_value;
}
void swapping_reference(int& value_a, int& value_b)      //call by reference  , 안전성있는 포인터
{
    int temp_value = 0;
    temp_value = value_a;
    value_a = value_b;
    value_b = temp_value;
}


int main()
{
    int value_a = 10;
    int value_b = 20;   
  
    swapping_value(value_a, value_b);             //값이 복사 된다(in stack)
    std::cout << value_a << std::endl;
    std::cout << value_b << std::endl;           //원본 유지, side effect로 swapping되었다.
    std::cout << std::endl;

    swapping_point(&value_a, &value_b);
    std::cout << value_a << std::endl;
    std::cout << value_b << std::endl;           //원본값이 바뀐다 , 주소로 연결되어 있기 때문에
    std::cout << std::endl;

    int value_aa = 10;
    int value_bb = 20;
    //int& ref_value_a = value_aa;              //1.안전성 있는 포인터(주소값을 가지고 연산하는것은 위험하기 때문에(주소값 변경 위험)주소값을 참조해서 연산)
    //int& ref_value_b = value_bb;              //2.value_aa의 주소를 참조함(alias별칭), call by reference 를 추천
    swapping_reference(value_aa, value_bb);     //3.원본값 <- 포인터(주소값을 가르킴) <- 레퍼런스(포인터의 주소값을 참조함) : 안전성 있는 포인터
    std::cout << value_aa << std::endl;    
    std::cout << value_bb << std::endl;         //원본값이 바뀐다
}