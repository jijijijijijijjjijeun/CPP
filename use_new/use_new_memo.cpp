#include <iostream>

int main()
{
    int night = 1001;      //int nights { 1001 };
    //type name * pointer name = new type name
    int* ptr_heap1 = new int;
    if (ptr_heap1 == nullptr)
    {
        return 1;
    }
    *ptr_heap1 = night; //*ptr_heap1 = 1001
    std::cout << "PTR_HEAP1 : " << *ptr_heap1 << std::endl;
    delete ptr_heap1;       //�����ȴٱ� ���ٴ� heap�� ����Ű�� �����Ͱ� �ö󰣴�(���´�)?
    ptr_heap1 = nullptr;

    double* ptr_heap2 = new double;
    if (ptr_heap2 == nullptr)
    {
        return 1;
    }
    *ptr_heap2 = 1001.10;
    std::cout << "PTR_HEAP2 : " << *ptr_heap2 << std::endl;
    delete ptr_heap2;
    ptr_heap2 = nullptr;
}