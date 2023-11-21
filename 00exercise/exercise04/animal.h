#include <iostream>
#include <string>

class Pet {
	std::string name, species;
	int age;
public:
	void print();
	void setPetName(std::string a);
	void setPetAge(int a);
	void setPetSpecies(std::string a);
};
