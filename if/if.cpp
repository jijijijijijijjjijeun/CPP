//p.308
#include <iostream>

int main()
{
    
    int spaces = 0;
    int total = 0;
    char ch = '\0';
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
        {
            ++spaces;
        }
        ++total;
        std::cin.get(ch);
    }
    std::cout << "total word : " << total << std::endl;
    std::cout << "띄어쓰기 : " << spaces << std::endl;
    return 0;
}