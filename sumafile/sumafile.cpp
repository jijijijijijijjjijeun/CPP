//p.358
#include <iostream>
#include <fstream>
#include <cstdlib> //<stdlib.h>

int main()
{
    char file_name[BUFSIZ]{};    //512,  1024
    std::ifstream inFile;
    std::cout << "Input file name : ";
    std::cin.getline(file_name, BUFSIZ);
    inFile.open(file_name);
    if (!inFile.is_open())
    {
        std::cout << "Can't open file" << std::endl;
        exit(EXIT_FAILURE); //return 1;
    }
    
    double value = 0.0;
    double sum = 0.0;
    int count = 0;
    inFile >> value;
    std::cout << value << std::endl;
    while (inFile.good()) 
    {
        ++count;
        sum = sum + value;
        inFile >> value;
        std::cout << value << std::endl;
    }
    if (inFile.eof())
    {
        std::cout << "end of file" << std::endl;
    }
    else if (inFile.fail())
    {
        std::cout << "데이터 불일치" << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }
    std::cout << "sum : " << sum << "\taverage : " << (double)sum / count << std::endl;
    inFile.close();
    return 0;
}