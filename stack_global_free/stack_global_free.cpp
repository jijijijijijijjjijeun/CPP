#include <iostream>
static int value1 = 10000;     //int value1 = 10000; ,static: 다른 파일에 노출 안된다.
static int value2 = 20000;     //int value2 = 20000; 

int main()
{   
    int value1 = 10;           //  value1 = 10;
    int value2 = 20;           //  value2 = 20;
    {
        value1 = 1000;         //  int value1 = 10;
        value2 = 2000;         //  int value2 = 20;
        int* ptr_heap{ new int[BUFSIZ]};
        *ptr_heap = value1;
        delete[] ptr_heap;
    }
    int value3 = 300;
    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
    std::cout << ::value1 << std::endl;
    std::cout << ::value2 << std::endl;
    return 0;
}