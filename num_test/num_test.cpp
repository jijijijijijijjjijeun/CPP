#include <iostream>

int main()
{
    std::cout << " starting count value : ";
    int limit;
    std::cin >> limit;
    int i;
    for (i = limit; i; i--)
        std::cout << "i = " << i << std::endl; 
        std::cout << "i = " << i << " 종료 " << std::endl;
   
    return 0;
}
