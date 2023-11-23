//p.281
#include <iostream>

int main()
{
    char ch;
    int count = 0;
    std::cout << "input letters , finish sign is #." << std::endl;
    std::cin >> ch;
    while (ch != '#')
    {
        std::cout << ch;
        ++count;
        std::cin >> ch;
    }
    std::cout << std::endl << count << " letters read" << std::endl;
}
