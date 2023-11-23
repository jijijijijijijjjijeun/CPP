#include <iostream>
#include <vector>

class Rect {
    int width, height, area;
public:
    Rect() : width{ 0 }, height{ 0 }, area{ 0 } {}
    Rect(int w, int h) : width{ w }, height{ h }, area{ h * w } {}
    void setW(int w) { width = w; }
    void setH(int h) { height = h; }
    int getW() const { return width; }
    int getH() const { return height; }
    int getA() const { return area; }
};


int main()
{
    
    int num;
    while (true)
    {
        std::cout << "�� ���� �簢���� �����ұ��?(1 ~ 10) ";
        std::cin >> num;

        if (num >= 1 && num <= 10)
        {
            std::vector<Rect> rectArray;
            for (int i = 1; i <= num; i++)
            {
                int width, height;
                std::cout << i << "�� �簢���� ���� ? ";
                std::cin >> width;
                std::cout << i << "�� �簢����  ���̴� ? ";
                std::cin >> height;
                rectArray.push_back(Rect(width, height));
            }

            for (int i = 0; i < num - 1; i++)
            {
                for (int j = 0; j < num - i - 1; j++)
                {
                    if (rectArray[j].getA()  < rectArray[j+1].getA())
                    {
                        std::swap(rectArray[j], rectArray[j+1]);
                    }
                }
            }

            std::cout << std::endl << "����� �簢���� ������ �����ϴ�." << std::endl;
            for (int i = 0; i < num; i++) // �ε����� 0���� ����
            {
                std::cout << i + 1 << "�� �簢�� : �� " << rectArray[i].getW() << ", ���� : " << rectArray[i].getH() << ", ���� : " << rectArray[i].getA() << std::endl;
            }

            break;
        }
        else
        {
            std::cout << "�ٽ� �Է��ϼ��� : " << std::endl;
        }
    }

    return 0;
}