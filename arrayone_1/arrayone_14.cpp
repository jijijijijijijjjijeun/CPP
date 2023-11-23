#include <iostream>

int main()
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = { 200,300,50 };

    std::cout << "고구마 합계 = ";
    std::cout << yams[0] + yams[1] + yams[2] << std::endl;
    std::cout << yams[1] << "개가 들어있는 포장은 ";
    std::cout << "개당" << yamcosts[1] << "원씩입니다." << std::endl;
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
    std::cout << "세 포장의 총 각겨은 " << total << "원 입니다." << std::endl;
    std::cout << std::endl << "yams 배열의 크기는 " << sizeof yams << "바이트 입니다" << std::endl;
    std::cout << "원소 하나의 크기는 " << sizeof yams[0] << "바이트 입니다" << std::endl;

    return 0;
}
