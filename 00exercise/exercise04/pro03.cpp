#include "animal.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	int age;
	std::string species;
	Pet pet;
	std::cout << "�ֿϵ����� �̸���? : ";
	std::cin >> name;
	pet.setPetName(name);
	std::cout << "�ֿϵ����� ���̴�? : ";
	std::cin >> age;
	pet.setPetAge(age);
	std::cout << "�ֿϵ����� ����? : ";
	std::cin >> species;
	pet.setPetSpecies(species);
	pet.print();
	return 0;
}
