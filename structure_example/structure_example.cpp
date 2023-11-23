#include <iostream>

//C++ 구조체나 클래스나 다 같음
//이름 지을때 C#과 동일한 스타일
//이름 지을때 대문자로 시작

struct Inflat //인터페이스 -> 명사로 설정  , struct = 사용자 데이터 타입,   struct Inflat = class Inflat
{
    char name[20];      //20
    //std::string name;
    float volume;       //4
    double price;       //8
};
struct _Inflat
{
    char name[20];      //20
    //std::string name;
    float volume;       //4
    double price;       //8
}Inflat;                //tag
void show_funnc()
{
    struct Inflat pal = { "KarL",20.3f,20.0 }; //이름이 똑같아도 상관 없다.
   // struct Inflat pal = { volume = 20.3f,"KarL",20.0 }; // 순서 바꿔서 쓰고 싶을 때
}int main()
{
    //struct Inflat inflat = { '\0', 0.0f, 0.0 };         //자료혐, 선언과 동시에 초기화
    struct Inflat inflat = { 'KarL', 10.0f, 39.12 };
    //inflat.name = "KarL";
    //strcpy(inflat.name, "KarL");
    //inflat.name = "KarL Lim";
    //inflat.volume = 10.0f;
    //inflat.price = 39.12;
    struct Inflat pal = { "Adacious",3.13F,32.99 };      // 선언과 동시에 초기화
    std::cout << pal.name << std::endl;
    std::cout << sizeof Inflat << std::endl;  //20 + 4 + 8 = 32
}