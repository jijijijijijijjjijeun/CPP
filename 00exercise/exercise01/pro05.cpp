#include <iostream>

int main()
{
    int sec;
    std::cout << "�ʸ� �Է��ϼ��� : ";
    std::cin >> sec;
    int m = sec / 60;
    int s = sec % 60;
    std::cout << m << " �� " << s << " �� " << std::endl;
}
