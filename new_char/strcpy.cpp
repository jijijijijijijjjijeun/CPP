#include <iostream>

int main()
{
    const char* rose = "Rose";       // R o s e \n, ���� �Ұ�
    char flower[10] = "Rose";        //R o s e \n, ���� ����

    char* ptr_heap = new char[10];
    if (!ptr_heap)
    {
        std::cout << "�޸� ����" << std::endl;
        return 1;
    }
    for (int i = 0; i < sizeof flower / sizeof flower[0]; ++i)
    {
        ptr_heap[i] = flower[i];
    }
    //*ptr_heap = flower;
    std::cout << ptr_heap << std::endl;
    delete[] ptr_heap; // delect �Ҷ� �迭�̶� [] ����
}