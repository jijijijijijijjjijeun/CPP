#include <iostream>

int main()
{
   /* std::cout << "Hello World!\n";*/
    int value_a = 1'000;            //1'000=1000
    int value_b = 20'000;
    int result = value_a + value_b;
    std::cout << 1'000 << "  +  " << value_b << "  =  " << result << std::endl << std::endl << std::endl;
    int whole_number = 0;
    double fractional_number = 0.0;
    wchar_t letter = L'\0';
    std::wcout << L"Enter an Integer, a double, and character.";
    std::wcin >> whole_number >> fractional_number >> letter;
    std::wcout << whole_number << "\t" << fractional_number << "\t" << letter << std::endl;
    return 0;
}