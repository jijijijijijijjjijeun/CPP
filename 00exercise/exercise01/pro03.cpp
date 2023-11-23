#include <iostream>
#include <iomanip>
int main()
{
    int year;
    int month;
    int day;
    std::cout << "오늘 날짜를 입력하새요." << std::endl;
    std::cout << "연도 : ";
    std::cin >> year;
    std::cout << "월 : ";
    std::cin >> month;
    std::cout << "일 :";
    std::cin >> day;
    std::cout << "오늘은 " << year << " 년 " << month << " 월 " << day << " 일 입니다." << std::endl;
    std::cout << "오늘 날짜는 " << year << "." << std::setw(2) << std::setfill('0') << month << "." << std::setw(2) << std::setfill('0') << day << ". 입니다." << std::endl;
}
