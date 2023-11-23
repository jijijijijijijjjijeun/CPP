#include <iostream>

int main()
{
    //AND => &&
    //OR => ||
    //NOT => !
    //XOR => ^
    //논리적 -> logic (TRUE,FALSE) -> 0이외의 값과 0
    
    bool state1 = true && false;
    std::cout << state1 << std::endl;    //false => 0

    bool state2 = 5 > 3 || 5 > 10;
    std::cout << state2 << std::endl;    //true => 1

    bool state3 = 5 < 8 and 5 > 2;
    std::cout << state3 << std::endl;    //true => 1

    bool state4 = !(5 > 8);
    std::cout << state4 << std::endl;    //true => 1

    bool state5 = not(8 > 5);
    std::cout << state5 << std::endl;    //false => 0

    bool state6 = 5 > 3 ^ 10 > 5;
    std::cout << state6 << std::endl;    //false => 0  (1 1),(0 0) = false ,(1 0),(0 1) = false 

    return 0;
}