#include <iostream>
static int value1 = 10000;     //int value1 = 10000; ,static: 다른 파일에 노출 안된다.
static int value2 = 20000;     //int value2 = 20000; 

int main()
{
    int value1 = 10;           //  value1 = 10;
    int value2 = 20;           //  value2 = 20;
    {
        for (int i = 0; i < 10; ++i)
        {
            static int value = 10;           //int value = 10; , 재초기화 되지 않음,  10 10 10 10 10 ....(int value = 10;)
            std::cout << value << std::endl;                                    // 10 11 12 13 14 ....(static int value = 10;)
            ++value;
        }
    }
    int value3 = 300;
    //std::cout << value1 << std::endl;
    //std::cout << value2 << std::endl;
    //std::cout << ::value1 << std::endl;
    //std::cout << ::value2 << std::endl;
    return 0;
}