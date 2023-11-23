#include <iostream>

int main()
{
    //변수명을 복수
    int value1= 10;//직접
    int value2= 20;

    int humans[] = { 1,2,3,4,5,6,7 };   //선언과 동시에 초기화  4*7 = 28bit
    int* ptr = &value1;
    int* ptr = humans;
    ptr = &value2;
    //humans = &value1;
    std::cout << humans << std::endl;            //주소
    std::cout << *humans << std::endl;           //값, 간접
    std::cout << humans[0] << std::endl;         //값
    return 0;
}
