#pragma once
#include <iostream>
#include <cstring>

class String
{ 
private:
    char* str;
    unsigned int length;
    static unsigned int numberOfObject;
public:
    static unsigned int get_numberOfObject()
    {
        return String::numberOfObject;
    }
    String();   //持失切
    ~String();  //社瑚切
    String(const char* str);
    char operator[](unsigned int);
    friend std::ostream& operator<<(std::ostream& os, const String& rhs);
    String(const String& rhs);
    String& operator=(const String& rhs);

};