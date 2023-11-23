#include"NAMESP.h"
namespace Pers
{
    void getPerson(Person& person)
    {
        std::cout << "이름을 입력 ";
        std::cin >> person.first_name;
        std::cout << "성을 입력 ";
        std::cin >> person.last_name;
    }
    void showPerson(const Person& person)
    {
        std::cout << person.last_name << ", " << person.first_name;
    }
}

namespace Debts
{
    void getDebt(Debt& debt)
    {
        getPerson(debt.name);
        std::cout << "부채를 입력하시오";
        std::cin >> debt.amount;
    }

    void showDebt(const Debt& debt)
    {
        Pers::showPerson(debt.name);
        std::cout << " : $" << debt.amount << std::endl;

    }

    double sumDebt(const Debt amount[], int number)
    {
        double total = 0.0;
        for (int i = 0; i < number; ++i)
        {
            total += amount[i].amount;
            return total;
        }
    }
}