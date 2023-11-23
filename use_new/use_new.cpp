#include <iostream>

int main()
{
    int nights = 1001;      //int nights { 1001 };
    int* pt = new int;      //type name * pointer name = new type name
    *pt = 1001;

    std::cout << "night의 값 = " << nights << " : 메모리 위치 " << &nights << std::endl;
    std::cout << "int 형 : " << "값 = " << *pt << " : 메모리 위치 " << pt << std::endl;

    double* pd = new double;
    *pd = 10000001.0;

    std::cout << "double 형 : " << "값 = " << *pd << " : 메모리 위치 " << pd << std::endl;
    std::cout << "포인터 pd의 메모리 위치 : " << &pd << std::endl;
    std::cout << "pt의 크기 = " << sizeof(pt);
    std::cout << " : *pt의 크기 = " << sizeof(*pt) << std::endl;
    std::cout << "pd의 크기 = " << sizeof(pd);
    std::cout << " : *pd의 크기 = " << sizeof(*pd) << std::endl;
   
    return 0;
}