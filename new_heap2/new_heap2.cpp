#include <iostream>

int value1 = 100;
int value;
static int value2 = 10;

int main()
{
    std::cout << "입력할 시험점수들? ";
    int array_size = 0;
    std::cin >> array_size;
    int* ptr_heap = new int[array_size];        // 4 * 5(5과목) = 20byte
    if (ptr_heap == nullptr)
    {
        std::cout << "미안 메모리가 없네" << std::endl;
        return 1;
    }


    std::cout << ptr_heap << std::endl;
    for (int i = 0; i < array_size; ++i)
    {
        int point = 0;
        std::cin >> point;
        ptr_heap[i] = point;
    }

    for (int i = 0; i < array_size; ++i)
    {
        std::cout << ptr_heap[i] << std::endl;
    }
    int sum = 0;
    for (int i = 0; i < array_size; ++i)
    {
        sum = sum + *(ptr_heap + i);
    }
    std::cout << "총합 : " << sum << "평균 : " << (double)sum / array_size << std::endl;
    delete[] ptr_heap;      // -> 배열일 땐 [] 표시를 써줘야 한다, heap 메모리 해제
    ptr_heap = nullptr;

}