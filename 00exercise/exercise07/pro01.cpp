#include <iostream>

class Circle
{
    int radius; 
public:
    void setRadius(int r)
    {
        radius = r;
    }
    double getArea()
    {
        return 3.141592 * radius * radius;
    }
};
int main()
{
    int circle_number;
    int count = 0;
    std::cout << "생성할 원의 개수 : ";
    std::cin >> circle_number;

    Circle* circleArray = new Circle[circle_number];

    for (int i = 0; i < circle_number; i++)
    {
        int r;
        std::cout << "원 " << i + 1 << "의 반지름 >> ";
        std::cin >> r;
        circleArray[i].setRadius(r);

        if (circleArray[i].getArea() > 5000.0)
        {
            count++; 
        }
    }
  
    std::cout << "면적이 5,000 cm^2를 초과하는 원의 개수 : " << count << std::endl;

    delete[] circleArray;

    return 0;

}

