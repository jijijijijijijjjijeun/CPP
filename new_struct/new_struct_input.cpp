//화살표 연산자
#include <iostream>

struct Inflat
{
    char str_buffer[BUFSIZ];  // 512
    float volume;       // 4 ->8
    double price;       // 8        -> total 524 byte
};
int main()
{
    Inflat inflat;      //구조체 불러옴
    std::cout << sizeof inflat << std::endl << std::endl;        // 528 = 512 + 8 + 8
    Inflat* ptr_inflat = new Inflat;
    std::cout << "input letter : ";
    char temporary[BUFSIZ]{};
    std::cin.getline(temporary, BUFSIZ);
    strcpy_s(ptr_inflat->str_buffer, BUFSIZ, temporary);     // ptr_inflat->name == (*ptr_inflat).name;
                                                             //           변수->  == (*변수)
    std::cout << "input volume : ";
    float tem_volume = 0.0f;
    std::cin >> tem_volume;
    ptr_inflat->volume = tem_volume;

    std::cout << "input price : ";
    double tem_price;
    std::cin >> tem_price;
    ptr_inflat->price = tem_price;

    std::cout << ptr_inflat->str_buffer << std::endl;
    std::cout << ptr_inflat->volume << std::endl;
    std::cout << ptr_inflat->price << std::endl;
    delete ptr_inflat;
}
