#include <iostream>

struct Inflat
{
    char name[BUFSIZ];  // 512
    float volume;       // 4 ->8
    double price;       // 8        -> total 524 byte
};
int main()
{
    Inflat iinflate;
    std::cout << sizeof Inflat << std::endl;        // 528 = 512 + 8 + 8
    Inflat* ptr_inflat = new Inflat;
    strcpy_s(ptr_inflat->name, BUFSIZ, "Karl");     // ptr_inflat->name == (*ptr_inflat).name;
                                                    //           변수->  == (*변수)
    ptr_inflat->volume = 30.3f;
    ptr_inflat->price = 300.20;

    delete ptr_inflat;
}
