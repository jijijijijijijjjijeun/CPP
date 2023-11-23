#include <iostream>

int main()
{
    enum PINS {
        PIN1=8, //0(기본값) 5(지정값)
        PIN2, //1(기본값) 6(지정값)
        Pin3  //2(기본값) 7(지정값)
    };
    switch (PIN1)
    {
    case PIN1:      //label
        std::cout << PIN1 <<std::endl;
        break;
    case PIN2:
        break;
    case Pin3:
        break;
    default:
        //break;
        std::cout << std::endl;
    }
}

