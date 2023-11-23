#include <iostream>

int main()
{
    std::string word;
    std::cout << "input sentence : ";
    std::cin >> word;
    std::cout << word << std::endl;
    //배열처럼 처리 animal a n i m a l
    //word[0] word[1] word[2] ... null
    for (int i = 0; i < word.size(); ++i)
    {
        std::cout << word[i] << "\t";
    }
    std::cout << std::endl;
    //배열처럼 처리 animal a n i m a l
    //null word[6] word[5] word[4] ...
     //word[6] word[5] word[4] ... => word.size() - 1
    for (int i = word.size() - 1; i >= 0; --i)
    {
        std::cout << word[i] << "\t";
    }
}
