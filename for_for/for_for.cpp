#include <iostream>

int main()
{   
    int ary[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    std::cout << ary << std::endl;       //주소

    std::cout << ary[0] << std::endl;       //주소
    std::cout << ary[1] << std::endl;       //주소
    std::cout << ary[2] << std::endl;       //주소

    std::cout << ary[0][0] << std::endl;    //1
    std::cout << ary[1][0] << std::endl;    //4
    std::cout << ary[2][0] << std::endl;    //7

    std::cout << &(ary[0][0])<< std::endl;      //주소

    int* ptr = &(ary[0][0]);
    std::cout << *ptr << std::endl;              //1
    std::cout << *(ptr + 3) << std::endl;        //4
    std::cout << *(ptr + 3 + 3) << std::endl;    //7
    int(* ptr2)[3] = ary;
    *(ptr + 3 + 3) = 70;                         //7->70
    std::cout << ary[2][0] << std::endl;         //70
}
