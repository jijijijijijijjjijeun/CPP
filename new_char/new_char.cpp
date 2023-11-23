#include <iostream>

int main()
{
    const char* rose = "Rose";       // R o s e \n, 수정 불가
    char flower[10] = "Rose";        //R o s e \n, 수정 가능

    char* ptr_heap = new char[10];
    if (!ptr_heap)
    {
        std::cout << "메모리 부족" << std::endl;
        return 1;
    }
    for (int i = 0; i < sizeof flower / sizeof flower[0]; ++i)
    {
        ptr_heap[i] = flower[i];
    }
    //*ptr_heap = flower;
    std::cout << ptr_heap << std::endl;
    delete[] ptr_heap; // delect 할때 배열이라 [] 같이
}