#include <iostream>

int main()
{
    int number;

    while (1)
    {
        std::cout << "���ڸ� �Է��ϼ��� : ";
        std::cin >> number;

        if (number >= 1 && number <= 9)
        {
            for (int i = 1; i <= 9; ++i)
            {
                int result = number * i;
                for (int j = 0; j < result; ++j)
                {
                    std::cout << "*";
                }
                std::cout << std::endl;
            }
            break;
        }
        else
        {
            std::cout << "1 �̻� 9 ������ ���ڸ� �Է��ϼ���." << std::endl;
        }
    }

    return 0;
}