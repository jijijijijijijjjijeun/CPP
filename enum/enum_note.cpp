#include <iostream>
//아두이노 에서
enum PINS
{
    LED_1 = 2, //2번 핀 output = LED1
    LED_2 = 3,
    LED_3 = 4,
    LED_4 = 5,
    PIR_1 = 6,
    PIR_2 = 7,
    PIR_3 = 8,
    PIR_4 = 9,
};              //가독성이 좋고 원본 수정 불가

void setup()
{
    //pinMode(LED_1, OUTPUT);
    //pinMode(LED_2, OUTPUT);
}

int main()
{
    enum PINS pin;
    std::cout << LED_1 << std::endl;
    std::cout << LED_1 << std::endl;
    //LED_1 = 1;//불가 why? 원본수정이 불가 하기 때문에
}