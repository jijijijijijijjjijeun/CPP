#include <iostream>

int main()
{
    double* ptr_heap = new double[3];// 8 * 3 = 24byte 사용 가능?
    if (!ptr_heap)
    {
        std::cout << "메모리부족" << std::endl;
        return 1;
    }
    ptr_heap[0] = 0.2;
    ptr_heap[1] = 0.5;
    ptr_heap[2] = 0.8;
    std::cout << ptr_heap[0] << std::endl;
    std::cout << ptr_heap[1] << std::endl;
    std::cout << ptr_heap[2] << std::endl;
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + ptr_heap[i];
    }
    std::cout << sum << std::endl;
    delete[] ptr_heap;
    ptr_heap = nullptr;
}