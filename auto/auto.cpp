#include <iostream>
#include <vector>
int main()
{
    auto n = 100; //auto => int
                  //auto => char

    std::vector<double> vec;
    std::vector<double>::iterator iter = vec.begin();
    auto iter2 = vec.begin();
    std::cout.put('A') << std::endl;
    std::cout.put(65) << std::endl;
    auto fat = 8.25f / 2.5;
    return 0;
}
