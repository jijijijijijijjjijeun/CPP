#include <iostream>
#include <iomanip>
int main()
{
    int year;
    int month;
    int day;
    std::cout << "���� ��¥�� �Է��ϻ���." << std::endl;
    std::cout << "���� : ";
    std::cin >> year;
    std::cout << "�� : ";
    std::cin >> month;
    std::cout << "�� :";
    std::cin >> day;
    std::cout << "������ " << year << " �� " << month << " �� " << day << " �� �Դϴ�." << std::endl;
    std::cout << "���� ��¥�� " << year << "." << std::setw(2) << std::setfill('0') << month << "." << std::setw(2) << std::setfill('0') << day << ". �Դϴ�." << std::endl;
}
