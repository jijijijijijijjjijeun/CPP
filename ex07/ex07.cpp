#include <iostream>
#include <vector>

int main()
{

    std::vector<int> numbers;

    for (int j = 10; j >= 1; --j)
    {
        numbers.push_back(j);
    }

    std::cout << "int numbers[] {";
    int index = 0;
    for (int num : numbers)
    {
        std::cout << '{' << index << "}:" << num << ", ";
        ++index;
    }
    std::cout << "};";
    std::cout << std::endl;

    numbers.clear();

    return 0;
}