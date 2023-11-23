//p.270
#include <iostream>

int main()
{
    char name[BUFSIZ];
    std::cout << "Input your english name : " << std::endl;
    std::cin.getline(name,BUFSIZ);
    std::cout << name << std::endl;
    int index = 0;                          //초기화
    while (name[index] != '\0')             //조건
    {
        std::cout << name[index] << "\t";
        ++index;                            //탈출할 수 있게 만듬
    }
    std::cout << std::endl;
}
