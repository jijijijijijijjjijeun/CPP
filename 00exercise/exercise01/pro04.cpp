#include <iostream>

int main()
{
    int a, b;
    std::cout << "�� ���� ���� �Է��ϼ��� : ";
    std::cin >> a >> b;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << (double)(a*1.0 / b) << std::endl;
}
