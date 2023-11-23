#include <iostream>
#include <array>

int main()
{
    int numbers[] { 1,2,3,4,5 };
    for (auto&& i : numbers)
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
    //std::cout << numbers[6] << std::endl;     //범위를 벗어나면 안된다.
    std::array<int, 5> array1 { 1,2,3,4,5 };
    for (auto&& i : array1)
    {
        std::cout << i << "\t";
    }
    //std::cout << array1[-2] << std::endl;     //범위를 벗어나면 안된다.
     std::cout << std::endl << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << array1.at(i) << std::endl;
    }
    //std::cout << array1.at(0) << std::endl;
    std::cout << std::endl;
}