#include <iostream>

int main()
{
    int value_1 = 10;
    int value_2 = 2;
    int result = value_1 % value_2; //value_2보다 큰값은 결과값으로 나올 수 없다.
    std::cout << result << std::endl;
}