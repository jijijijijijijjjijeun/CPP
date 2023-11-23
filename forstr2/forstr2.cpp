//p.257
#include <iostream>

int main()
{
    std::cout << "input a word : ";
    std::string word;
    std::cin >> word;

    char temporary;
    int i, j;
    for (i = word.size()-1, j = 0; j < i; --i, ++j)
    {
        temporary = word[i];
        word[i] = word[j];
        word[j] = temporary;
    }
    std::cout << word << std::endl;
    return 0;
}