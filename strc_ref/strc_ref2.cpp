//p.486
#include <iostream>
#include <string>
struct FreeThrows
{
    std::string name;
    int made;
    int attempt;
    float percent;
};
void display(const FreeThrows& ft);
void set_pc(FreeThrows& ft);
FreeThrows& accumulate(FreeThrows& traget, const FreeThrows& scource);

int main()
{
    FreeThrows one{ "Ifelsa Branch", 13, 14 };
    FreeThrows two{ "Andor Knott", 10, 16 };
    FreeThrows three{ "Minnie Max", 7, 9 };
    FreeThrows four{ "Whily Looper", 5, 9 };
    FreeThrows five{ "LongL Long", 6, 14 };
    FreeThrows team{ "Throwgoods", 0 ,0 };
    FreeThrows dup;
    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);
    dup = accumulate(team, five);
    std::cout << "team 출력 : " << std::endl;
    display(team);
    std::cout << "대입이후 dup 출력 : " << std::endl;
    display(dup);
    set_pc(four);
    accumulate(dup, five) = four;
    std::cout << "뮨제의 소지가 있는 dup 출력 : " << std::endl;
    display(dup);
    return 0;
}
void display(const FreeThrows& ft)
{
    std::cout << "Name : " << ft.name << std::endl;   //&변수 : 주소값
    std::cout << "made : " << ft.made << "\t";
    std::cout << "attempt : " << ft.attempt << "\t";
    std::cout << "percent : " << ft.percent << std::endl;
}
void set_pc(FreeThrows& ft)
{
    if (ft.attempt != 0)
    {
        ft.percent = 100.0f * float(ft.made) / float(ft.attempt);
    }
    else
    {
        ft.percent = 0;
    }
}
FreeThrows& accumulate(FreeThrows& target, const FreeThrows& source)
{
    target.attempt += source.attempt;
    target.made += source.made;
    set_pc(target);
    return target;
}