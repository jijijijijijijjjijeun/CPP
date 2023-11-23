#include <iostream>

void function(int length, int* ptr)
{
    ptr = new int[length];
    for (int i = 0; i < length; ++i)
    {
        ptr[i] = i + 10;
        std::cout << "ptr[" << i << "] = " << ptr[i] << std::endl;
    }
   // return ;
}

int main()
{
    int* pa = nullptr;
    void (*fp)(int, int*) = function;
    fp(10, pa);

    delete[] pa;
    return 0;
}