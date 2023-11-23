//p.616
#include <iostream>
#include "NAMESP.h"

int main()
{
    Pers::Person person;
    person.first_name = "KarL";
    person.last_name = "Lim";
    std::cout << person.first_name << std::endl;
    std::cout << person.last_name << std::endl;
}