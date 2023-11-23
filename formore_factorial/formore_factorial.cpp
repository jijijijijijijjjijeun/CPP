#include <iostream>

int main()
{
    long long factorials[16]{};
    factorials[1] = factorials[0] = 1LL; // 0! = 1, 1! =1
    for (int i = 2; i < 16; i++)
    {
        factorials[i] = factorials[i - 1] * i;
    }
    int index = 0;
    for (int i = 0; i < 16; i++)    // for(auti&& i : factorials) : advancs for 구문
    {                               // for(long long i : factorials), factorials 사이즈 만큼
        std::cout << index << "! = " << factorials[i] << std::endl;
        ++index;
    }
    return 0;
}