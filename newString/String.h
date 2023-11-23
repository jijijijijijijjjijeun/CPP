#pragma once
#include <iostream>
class String
{
private:
	unsigned int length;
	char* ptr_str_heap;
	static unsigned int numberOfObject;	//��ü�� ���涧���� ����
public:
	String();	//����Ʈ�� ������
	~String();	//�Ҹ��� destructor
	explicit String(const char*);	//����� String("Hello") => x
									//		String str = "Hello"	=>o
	const char* get_str();	//���ڿ� �˻� �޼ҵ�
	String(const String&);//��������� ����
	static const unsigned int get_numberOfObject();
	friend std::ostream& operator<<(std::ostream&, const String&);
	const String& operator=(const String&);
	const String operator+(const String&);
	const char operator[](const unsigned int);
};