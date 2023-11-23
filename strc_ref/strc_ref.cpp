#include <iostream>

struct FreeThrows
{
    std::string name;
    int made;
    int attempt;
    float percent;
};
void display(const FreeThrows&);
void set_pc(FreeThrows&);
FreeThrows& accumulate(FreeThrows&, const FreeThrows&);
FreeThrows*accumulate(const FreeThrows&);

int main()
{
    FreeThrows free1{ "Brian",10,2,90 };
    FreeThrows free2;
    display(free1);
    FreeThrows temp = accumulate(free1, free2);
    std::cout << temp.name << std::endl;
    //FreeThrows * ptr = accumulate(free1);
    //std::cout << ptr->name << std::endl;
    ////ptr = nullptr;
}
void display(const FreeThrows& ref)
{
    std::cout << "Name : " << ref.name << std::endl;   //&변수 : 주소값
    std::cout << "made : " << ref.made << std::endl;
    std::cout << "attempt : " << ref.attempt << std::endl;
    std::cout << "percent : " << ref.percent << std::endl;
    //ref.made = 220        안된다 why? const FreeThrows& ref => const로 고정했기 떄문에 대입연산자 안먹는다
}

FreeThrows& accumulate(FreeThrows& ref1, const FreeThrows& ref2)
{
    FreeThrows temporary;
    temporary.name = ref2.name;
    temporary.made = ref2.made;
    temporary.percent = ref2.percent;
    return temporary;
}
FreeThrows* accumulate(const FreeThrows& ref2)
{
    FreeThrows* temporary = nullptr;
    temporary->name = ref2.name;
    temporary->made = ref2.made;
    temporary->percent = ref2.percent;
    return temporary;
}