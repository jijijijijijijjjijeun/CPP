#include < iostream>

int main()
{
	std::string word {"#ate"};
	for (char ch = 0; word != "mate"; ch++)
	{
		std::cout << word << std::endl;
		word[0] = ch;
	}

	std::cout << word << std::endl;

}