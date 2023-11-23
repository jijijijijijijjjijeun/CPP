#include <iostream>

int main()
{
    double wages[] = { 10000.0 ,20000.0, 30000.0 };     //&wages[0] = wages
    short stacks[] = { 3,2,1 };
    double value_a = 100.0;
    value_a;
    double* ptr_value = &value_a;
    double* ptr_wages = &wages[0];
    //double* wages = &wages; //배열일 경우 주소값이 나온다
    std::cout << ptr_wages[0] << std::endl; //10000
    short* ptr_stacks = stacks;
    std::cout << *(ptr_stacks + 2) << std::endl;        //1
}
//배열과 포인터의 관계 1번 : 배열이름이 식에서 사용되면 첫 번째 element의 시작 주소를 의미 한다.