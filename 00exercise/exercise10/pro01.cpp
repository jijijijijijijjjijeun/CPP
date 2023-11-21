#include <iostream>

class Rectangle
{
public:
    int width, height;
    Rectangle(int w, int h): width(w), height(h)
    {
        std::cout << "Rectangle 생성자()" << std::endl;
    }
    ~Rectangle()
    {
        std::cout << "Rectangle 소멸자()" << std::endl;
    }
    void showArea()
    {
        int area = width * height;
        std::cout << area << std::endl;
    }
};
class Square : public Rectangle
{
public:
    Square(int a):Rectangle(a,a)
    {
        std::cout << "Square 생성자()" << std::endl;
    }
    ~Square()
    {
        std::cout << "Square 소멸자()" << std::endl;
    }

    
};

int main()
{
    Rectangle rec(4, 3);
    rec.showArea();
    Square sqr(7);
    sqr.showArea();
    return 0;
}