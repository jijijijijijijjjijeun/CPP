#include <iostream>
#include <iomanip>

int main()
{
    double pi = 3.141592;
    int a = 2;
    double square = 1.414213;
    double light = 299792.458000;
    double gravity = 9.806650;
    std::cout  << "�������� " << std::fixed << std::setprecision(6) << pi << "�̰�," << std::endl;
    std::cout << a <<"�� �������� " << std::fixed << std::setprecision(6) << square << "�̴�." << std::endl;
    std::cout << "���� �ӵ��� " << std::fixed << std::setprecision(6) << light << "m/s �̰�," << std::endl;
    std::cout << "�߷°��ӵ��� " << std::fixed << std::setprecision(6) << gravity << "m/s���� �Դϴ�." << std::endl;
}
