#include"NAMESP.h"
namespace Pers
{
    void getPerson(Person& person)
    {
        std::cout << "�̸��� �Է� ";
        std::cin >> person.first_name;
        std::cout << "���� �Է� ";
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
        std::cout << "��ä�� �Է��Ͻÿ�";
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