#include <iostream>
#include <vector>

int main()
{

    std::vector<int> numbers = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    std::cout << "int numbers[] {";
    int index = 0;
    for (int num : numbers)
    {
        std::cout << "{" << index << "}:" << num << ", ";
        index = index + 1;
    }
    std::cout << "};";
    std::cout << std::endl;

    numbers.clear();

    return 0;
}