#include "animal.h"
#include <iostream>
#include <string>

void Pet::print()
{
	std::cout << std::endl << std::endl << "����ڰ� �Է��� �ֿϵ����� ������ ������ �����ϴ�." << std::endl;

	std::cout << "�̸� : " << this->name << std::endl;
	std::cout << "���� : " << this->age << std::endl;
	std::cout << "���� : " << this->species << std::endl;
}
void Pet::setPetName(std::string a)
{
	this->name = a;
}
void Pet::setPetAge(int a)
{
	this->age = a;
}
void Pet::setPetSpecies(std::string a)
{
	this->species = a;
}
