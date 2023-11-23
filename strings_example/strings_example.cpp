#include<iostream>
#include "string.h"
int main()
{
	String str0{ String() };
	String str1{ String("Android")};
	std::cout << str1 << std::endl;	//<<오버로딩 해줘야함
	String str2 = "Apple";
	std::cout << str2 << std::endl;
	String str3 = str2;//복사 생성자
	std::cout << str3 << std::endl;
	String str4 = "ios";
	str4 = str1;
	std::cout << str4 << std::endl;
	String str5 = str1 + str2;
	//다른언어에서 인덱서를 오버로딩 많이 제공 된다.
	//O.O.P => 절차지향적 언어로는 하기 어렵다.
	std::cout << str5 << std::endl;
	std::cout << str5[7] << std::endl;
	return 0;
}
