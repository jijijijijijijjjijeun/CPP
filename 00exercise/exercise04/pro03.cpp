#include "animal.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	int age;
	std::string species;
	Pet pet;
	std::cout << "애완동물의 이름은? : ";
	std::cin >> name;
	pet.setPetName(name);
	std::cout << "애완동물의 나이는? : ";
	std::cin >> age;
	pet.setPetAge(age);
	std::cout << "애완동물의 종은? : ";
	std::cin >> species;
	pet.setPetSpecies(species);
	pet.print();
	return 0;
}
