#include <iostream>

class Student
{
public :
    std::string name;
    std::string department;
    int id_num;
    std::string hobby;
    void print()
    {
        std::cout << "이름: " << name << std::endl;
        std::cout << "학과: " << department << std::endl;
        std::cout << "취미: " << hobby << std::endl;
        std::cout << "학번: " << id_num << std::endl;
    }
};

int main()
{
    Student jieun;
    jieun.name = "김지은";
    jieun.department = "전자공학과";
    jieun.hobby = "볼링";
    jieun.id_num = 20180784;
   
    jieun.print();
}
