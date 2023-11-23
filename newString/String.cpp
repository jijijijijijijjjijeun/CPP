#include "String.h"
//static 변수 초기화
unsigned int String::numberOfObject = 0u;
const unsigned int String::get_numberOfObject()
{
	std::cout << String::numberOfObject << std::endl;
	return String::numberOfObject;
}
String::String()	//디폴트형 생성자
{
	this->length = 0;
	this->ptr_str_heap = new char[1];
	++String::numberOfObject;	//객체가 하나 생성 되었음
}
String::~String()
{
	delete[] this->ptr_str_heap;	//배열타입이니까
	this->ptr_str_heap = nullptr;
	--String::numberOfObject;
	if (String::numberOfObject ==0)
	{
		std::cout << "No Memory Leak" << std::endl;	//메모리 누수 체크
	}
}
String::String(const char* rhs)	//입력값이 있는 애들
{
	++String::numberOfObject;	//객체 생성
	this->length = std::strlen(rhs) + 1;	//문자열의 개수를 입력 받아
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs);
}
String::String(const String& rhs)	//복사 생성자
{
	++String::numberOfObject;	//객체 생성
	this->length = rhs.length + 1;
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs.ptr_str_heap);
}
const char* String::get_str()//문자열을 보고 싶을때,디버깅용 문자열 검색
{
	return this->ptr_str_heap;
}
//연산자 오버로딩
std::ostream& operator<<(std::ostream& lhs, const String& rhs)	//friend
{
	lhs << rhs.ptr_str_heap;
	return lhs;
}
const String& String::operator=(const String& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	this->length = 0;
	delete[] this->ptr_str_heap;
	this->length = rhs.length + 1;
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs.ptr_str_heap);
	return *this;
}
const String String::operator+(const String& rhs)
{
	
	String tmp = String();
	tmp.length = 1;
	delete[]tmp.ptr_str_heap;
	tmp.length = this->length + rhs.length;
	tmp.ptr_str_heap = new char[tmp.length];
	for (int i = 0; i < this->length -1; ++i)
	{
		tmp.ptr_str_heap[i] = this->ptr_str_heap[i];
	}
	int index = 0;

	for (int i = this->length - 1; i < this->length + rhs.length - 1; ++i)
	{
		tmp.ptr_str_heap[i] = rhs.ptr_str_heap[index++];
	}
	tmp.ptr_str_heap[this->length + rhs.length - 1] = '\0';
	return tmp;
}
const char String::operator[](const unsigned int index)
{
	if (index >= this->length -1)
	{
		std::cout << "Index is out of bound" << std::endl; 
		return '\0';
	}
	return this -> ptr_str_heap[index];
}