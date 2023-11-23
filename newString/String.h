#pragma once
#include <iostream>
class String
{
private:
	unsigned int length;
	char* ptr_str_heap;
	static unsigned int numberOfObject;	//객체가 생길때마다 저장
public:
	String();	//디폴트형 생상자
	~String();	//소멸자 destructor
	explicit String(const char*);	//명시적 String("Hello") => x
									//		String str = "Hello"	=>o
	const char* get_str();	//문자열 검색 메소드
	String(const String&);//복사생성자 정의
	static const unsigned int get_numberOfObject();
	friend std::ostream& operator<<(std::ostream&, const String&);
	const String& operator=(const String&);
	const String operator+(const String&);
	const char operator[](const unsigned int);
};