#include "animal.h"
#include <iostream>
#include <string>

void Pet::print()
{
	std::cout << std::endl << std::endl << "사용자가 입력한 애완동물의 정보는 다음과 같습니다." << std::endl;

	std::cout << "이름 : " << this->name << std::endl;
	std::cout << "나이 : " << this->age << std::endl;
	std::cout << "종류 : " << this->species << std::endl;
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
