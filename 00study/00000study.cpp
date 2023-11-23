#include <iostream>
#include <string>
int main()
{
	std::string s1;
	std::cin >> s1;
	std::cin.ignore();
	std::string s2;
	std::getline(std::cin,s2);
	std::string s3 = s2 + "에 사는 " + s1 + "님 안녕하세요";
	std::cout << s3 << std::endl;
	return 0;
}

