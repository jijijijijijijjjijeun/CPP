//p.294
#include <iostream>

void show_array(int(*param)[3])
{
    int* ptr = &(param[0][0]);
    for (int i = 0; i < 9; i++)
    {
        std::cout << ptr[i] << std::endl;
    }
}

int main()
{
    int ary[][3] = {        //포인터가 2개 숨어있음, 이중 포인터
        {1,2,3},            //ary[][3] 뒤에는 상수를 무조건 써줘야함
        {4,5,6},
        {7,8,9}
    };

    show_array(ary);

    int array1[]{ 1,2,3 };
    int array2[]{ 4,5,6 };
    int array3[]{ 7,8,9 };

    int* ptr_array1 = array1;
    int* ptr_array2 = array2;
    int* ptr_array3 = array3;
    int* ptr_array[3] = { ptr_array1,ptr_array2,ptr_array3 };
    std::cout << "값1 : " << ptr_array[0][0] << std::endl;
    std::cout << std::endl;

    std::cout << ary << std::endl;       //주소
    std::cout << std::endl;
    std::cout << ary[0] << std::endl;       //주소
    std::cout << ary[1] << std::endl;       //주소
    std::cout << ary[2] << std::endl;       //주소
    std::cout << std::endl;
    std::cout << ary[0][0] << std::endl;    //1
    std::cout << ary[1][0] << std::endl;    //4
    std::cout << ary[2][0] << std::endl;    //7
    std::cout << std::endl;
    std::cout << &(ary[0][0]) << std::endl;      //주소
    std::cout << std::endl;
    int* ptr = &(ary[0][0]);
    for (int i = 0; i < 9; i++)
    {
        std::cout << ptr[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << *ptr << std::endl;              //1
    std::cout << *(ptr + 3) << std::endl;        //4
    std::cout << *(ptr + 3 + 3) << std::endl;    //7
    //int** ptr3 = ary;                            c++에서는 허용 안된다
    std::cout << std::endl;
    int(*ptr2)[3] = ary;
    *(ptr + 3 + 3) = 70;                         //7->70
    std::cout << ary[2][0] << std::endl;         //70
    std::cout << ptr2[2][0] << std::endl;
}
