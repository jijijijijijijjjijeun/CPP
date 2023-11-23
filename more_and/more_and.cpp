//p.322
#include <iostream>

const char* qualify[4]{     //4개를 받을수 있는 포인터가 있음
    "만미터 달리기",
    "모래사장 씨름",
    "비치 발리",
    "부메랑 던지기"
};

int main()
{
    while (1)
    {
        int age;
        std::cout << "Input your age : ";
        std::cin >> age;
        int index = 0;
        if (age > 17 && age < 35)
        {
            index = 0;
        }
        else if (age >= 35 && age < 50)
        {
            index = 1;
        }
        else if (age >= 50 && age < 65)
        {
            index = 2;
        }
        else
        {
            index = 3;
        }
        std::cout << " you can participated in " << qualify[index] << std::endl;
    }

}
