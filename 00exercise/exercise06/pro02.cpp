#include <iostream>
#include <vector>

class Rect {
    int width, height;
public:
    Rect() : width{ 0 }, height{ 0 } {}
    Rect(int w, int h) : width{ w }, height{ h } {}
    void setW(int w) { width = w; }
    void setH(int h) { height = h; }
    int getW() const { return width; }
    int getH() const { return height; }
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

            std::cout << std::endl << "����� �簢���� ������ �����ϴ�." << std::endl;
            for (int i = 0; i < num; i++) // �ε����� 0���� ����
            {
                std::cout << i + 1 << "�� �簢�� : �� " << rectArray[i].getW() << ", ���� : " << rectArray[i].getH() << std::endl;
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