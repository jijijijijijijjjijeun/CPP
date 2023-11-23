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
        std::cout << "������ ���� ���� : ";
        std::cin >> circle_number;

        std::cout << "���� �������� 1 ~ 100 ������ ������ �����˴ϴ�." << std::endl;

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
        std::cout << circle_number << " ���� �� �߿���, " << std::endl <<
            "������ 5000cm^2 �� �ʰ��ϴ� ���� ������ " << count << "�� �Դϴ�." << std::endl;


        delete[] circleArray;

    }
    
    return 0;

}

