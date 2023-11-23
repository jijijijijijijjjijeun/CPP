//p.517,type safety
#include <iostream>

template<typename T>
T function(T number)
{
    //T temporary_value;
    //return temporary_value + number;
    return number;
}
double function(double number)
{
    return number;
}
int main()
{
    double value = 10.0f;
    function(value);
    return 0;
}