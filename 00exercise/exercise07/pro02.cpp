#include <iostream>
#include <cstdlib>
#include <ctime>
 
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
    while (1)
    {
        int circle_number;
        int count = 0;
        std::cout << "생성할 원의 개수 : ";
        std::cin >> circle_number;

        std::cout << "원의 반지름은 1 ~ 100 사이의 난수로 생성됩니다." << std::endl;

        Circle* circleArray = new Circle[circle_number];

        srand(time(NULL));

        for (int i = 0; i < circle_number; i++)
        {
           
            int r;
            r = rand() % 100 + 1;
            std::cout << r << std::endl;
            circleArray[i].setRadius(r);

            if (circleArray[i].getArea() > 5000.0)
            {
                count++;
            }
        }
        std::cout << circle_number << " 개의 원 중에서, " << std::endl <<
            "면적이 5000cm^2 를 초과하는 원의 개수는 " << count << "개 입니다." << std::endl;


        delete[] circleArray;

    }
    
    return 0;

}

