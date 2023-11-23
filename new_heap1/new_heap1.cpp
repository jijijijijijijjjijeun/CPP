#include <iostream>

int value1 = 100;
int value;
static int value2 = 10;

int main()
{
    int* ptr_heap = new int;                  // -> C언어에서 malloc이랑 같다 
    if (ptr_heap == nullptr)                  // heap메모리의 4바이트 공간에서 첫번째 주소를 받는다
    {
        std::cout << "미안 메모리가 없네" << std::endl;
        return 1;
    }
    std::cout << ptr_heap << std::endl;      // heap 영역에서 준  첫번째 주소값
    *ptr_heap = 100;                         // heap메모리에 접근해서 쓰레기값이 100으로 초기화
    *(ptr_heap + 1) = 200;

    std::cout << *ptr_heap << std::endl;    // 100을 가져옴
    std::cout << *(ptr_heap + 1) << std::endl;
    // std::cout << ptr_heap[1] << std::endl; -> 컴파일은 되는데 os가 위험하다 판단해서(값을 막 쓰니까) 막는 것이다
    delete ptr_heap;                       // -> heap메모리를 불러왔으니 해제를 시켜줘야 한다
                                           // delete[] ptr_heap; -> 배열일 땐 [] 표시를 써줘야 한다
    ptr_heap = nullptr;

}