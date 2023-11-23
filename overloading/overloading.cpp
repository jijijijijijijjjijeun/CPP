//p.509
#include <iostream>

int function(int number)
{
    return number;
}
//double function(int number)
//{
//    return number;
//}             
int function(double number)
{
    return number;
}
int function(float number)
{
    return number;
}
int function(long number)
{
    return number;
}
int main()
{
    function(10);       //int
    function(10.0);     //double
    function(10.0f);    //float
    function(10L);      //long
    return 0;
}
