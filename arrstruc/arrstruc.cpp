#include <iostream>

struct inflat
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    inflat guest[2] = { {"Bambi",0.5,21.99},{"Godzilla",2000,565.99} };
    std::cout << guest[0].name << "와 " << guest[1].name << "의 부피를 합치면 " << std::endl;
    std::cout << guest[0].volume + guest[1].volume << "세제곱피트 입니다" << std::endl;
    return 0;
}
