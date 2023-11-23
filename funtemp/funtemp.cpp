//p.520
#include <iostream>
template < class Any>
void Swap(Any& a, Any& b);
int main()
{
    int i = 10;
    int j = 20;
    std::cout << "i , j = " << i << ", " << j << std::endl;
    std::cout << "컴피일러가 생성한 int형 교환기를 사용하면 " << std::endl;
    Swap(i, j);
    std::cout << "이제 i , j = " << i << ", " << j << std::endl;

    double x = 24.5;
    double y = 81.7;
    std::cout << "x , y = " << x << ", " << y << std::endl;
    std::cout << "컴피일러가 생성한 double형 교환기를 사용하면 " << std::endl;
    Swap(x, y);
    std::cout << "이제 x , y = " << x << ", " << y << std::endl;
    return 0;
}
template < class Any>
void Swap(Any& a, Any& b)
{
    Any temp;
    temp = a;
    a = b;
    b = temp;
}