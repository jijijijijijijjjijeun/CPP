#include "String.h"
//static ���� �ʱ�ȭ
unsigned int String::numberOfObject = 0u;
const unsigned int String::get_numberOfObject()
{
	std::cout << String::numberOfObject << std::endl;
	return String::numberOfObject;
}
String::String()	//����Ʈ�� ������
{
	this->length = 0;
	this->ptr_str_heap = new char[1];
	++String::numberOfObject;	//��ü�� �ϳ� ���� �Ǿ���
}
String::~String()
{
	delete[] this->ptr_str_heap;	//�迭Ÿ���̴ϱ�
	this->ptr_str_heap = nullptr;
	--String::numberOfObject;
	if (String::numberOfObject ==0)
	{
		std::cout << "No Memory Leak" << std::endl;	//�޸� ���� üũ
	}
}
String::String(const char* rhs)	//�Է°��� �ִ� �ֵ�
{
	++String::numberOfObject;	//��ü ����
	this->length = std::strlen(rhs) + 1;	//���ڿ��� ������ �Է� �޾�
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs);
}
String::String(const String& rhs)	//���� ������
{
	++String::numberOfObject;	//��ü ����
	this->length = rhs.length + 1;
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs.ptr_str_heap);
}
const char* String::get_str()//���ڿ��� ���� ������,������ ���ڿ� �˻�
{
	return this->ptr_str_heap;
}
//������ �����ε�
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