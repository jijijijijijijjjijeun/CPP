//p.826
#include <iostream>
#include <cstring>
#pragma once

class StringBad
{
private:
    char* str;
    int length;
    static int number_object;       //����Ʈ �����ڿ��� �����Ǵ� ��ü
public:
    int get_length()
    {
        /*std::cout << this->get_numbers_string << std::endl;*/ // �߸��� ���� ��� x
        StringBad::get_numbers_string;
        return this->length;
    }
    static int get_numbers_string()
        //static �Լ��� this�� ���
        //�ν��Ͻ� ������ ������ �� ����.
        //static �������� ������ �� �ִ�.
    {
        //StringBad::number_string = 10'000;
        return StringBad::number_object;
    }

    StringBad() //��ü �ν��Ͻ� ����
    {
        this->str = new char[BUFSIZ]; //system size 512
        this->length = BUFSIZ;
        //StringBad::number_object = 0; //0���� ����
        StringBad::number_object++;
        std::cout << "��ü ���� : " << StringBad::number_object << std::endl;

    }
    StringBad(const char* str)
    {
        this->length = std::strlen(str);
        this->str = new char[length + 1]; //'\0'
        strcpy_s(this->str, length + 1, str);
        StringBad::number_object++;
        std::cout << "��ü ���� : " << StringBad::number_object << std::endl;

        std::cout << this->str << std::endl;
    }
    StringBad(const StringBad& rhs) //���� ����
    {
        std::cout << "copy constructor" << std::endl;
        StringBad::number_object++;//��ü �ϳ� �������
        this->length = rhs.length;
        this->str = new char[length + 1];
        strcpy_s(this->str, length + 1, rhs.str);
        std::cout << this->str << std::endl;
    }
    StringBad& operator=(const StringBad& rhs)//������ ����� ���Կ����� �����ϱ� ����
    {
        if (this == &rhs)    //rhs�� �ּҿ� ���ٸ�
        {
            return *this;   //�߸��ؼ� ������ ���� �ִ� ��츦 ���� �ϱ� ����  str3 = str3 ���� ���
        }
        std::cout << "Assignment Operator called" << std::endl;
        delete[] this->str; //�� �ڽ��� �����°� = ���� ����Ű�� �ִ� �ּҸ� ������ ��
        this->length = rhs.length;
        this->str = new char[length + 1];
        strcpy_s(this->str, length + 1, rhs.str);
        std::cout << this->str << std::endl;
        return *this;       //��ü�� ������
    }
    ~StringBad() //�Ҹ���
    {
        std::cout << "~StringBad()" << std::endl;
        StringBad::number_object--;
        std::cout << "��ü ���� : " << StringBad::number_object << std::endl;
        delete[]this->str; //�޸� ����
        this->length = 0;
        //StringBad::number_object = 0;
        this->str = nullptr;
    }

    friend std::ostream& operator<<(std::ostream& os, const StringBad& rhs);
};

int StringBad::number_object {0};//�ʱ�ȭ
std::ostream& operator<<(std::ostream& os, const StringBad& rhs)
{
    os << rhs;
    return os;
}



int main()
{
    StringBad str1 = StringBad("Hello world"); //StringBad("Hello world");
    StringBad str2(str1);                      //���� ������, = StringBad str2 = StringBad(str1), ���� ���� => ���� ���縦 �ؾ���(���� ������)

    StringBad str3 = "Android";
    //str3 = str3;      //StringBad& operator=(const StringBad& rhs) ���� ������
    str3 = str2;        //������ �����ε�, ���翬����
    return 0;

}