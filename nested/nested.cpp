#include <iostream>

int main()
{
     char cities[5][25] = {"Seoul","Jejudo","Busan","Gangneung","Daegu"};
    int maxTemps[4][5] = {
        {35,32,33,36,35},
        {33,32,34,35,31},
        {33,34,32,35,34},
        {36,35,34,37,35}
    };

    std::cout << "2009 ~ 2012 highest temperature" << std::endl << std::endl;
    for (int city = 0; city < 5; city++)
    {
        std::cout << cities[city] << " : \t";
        for (int year = 0; year < 4; year++)
        {
            std::cout << maxTemps[year][city] << " : \t";
        }
        std::cout << std::endl;
    }
}
