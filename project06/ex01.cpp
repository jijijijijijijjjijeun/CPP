#include <iostream>
#include <cctype>	

int main()
{
    char ch;
    std::cout << "Input sentence(If you want finish, you can input '@') : " << std::endl;
    std::cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch)) //문자나 숫자면 true
        {
            if (islower(ch))
            {
                std::cout.put(toupper(ch));;
            }
            else if(isupper(ch))
            {
                std::cout.put(tolower(ch));
            }
        }
        else
        {
            std::cout.put(ch);
        }
        std::cin.get(ch);
    }
    return 0;
}