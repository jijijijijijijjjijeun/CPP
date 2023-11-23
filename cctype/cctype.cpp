#include <iostream>
#include <cctype>

int main()
{
    std::cout << "분석할 텍스트를 입력하시오 " << std::endl;
    char ch;
    int space = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    std::cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
        {
            chars++;
        }
        else if (isspace(ch))
        {
            space++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (ispunct(ch))
        {
            punct++;
        }
        else 
        {
            others++;
        }
        std::cin.get(ch);
    }
    std::cout << "alphabet : " << chars << ", " << "space : " << space << ", " << "digits : " << digits << ", " << "punct : " << punct << ", " << "other : " << others << std::endl;
    return 0;
}