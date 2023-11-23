#include <iostream>

//비트필드 embedded
//임베디드

struct ToggleRegister
{
    unsigned int SN : 4;    //4bit -> SN에 해당
    unsigned int : 4;       //unused bit
    bool good_in : 1;
    bool good_out : 1;
};

union One4All               //예전에 구조체를 쓰려고 하는데 메모리가 부족했을 때 사용, 메모리를 공유하는것이 목적
{
    int value1;
    int value2;
    double value3;          //가장큰 매모리를 기준으로 만듬,8byte
};  

int main()
{
    ToggleRegister toggle_switch{ 0b0000,false,false };
    toggle_switch.SN = 0b1101;  //1101 => on on off on (SN에 led가 달려 있다고 했을 때)

    //union
    union One4All _u1;
    _u1.value1 = 10;
    std::cout << _u1.value1 << std::endl;   //10
    std::cout << _u1.value2 << std::endl;   //10
    std::cout << _u1.value3 << std::endl;   //double 8byte인데 int 4byte만 써서 값이 이상하게 변한다

}

