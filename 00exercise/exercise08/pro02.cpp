#include <iostream>

class Point {
private:
	double* points;// ��ǥ�� �����ϴ� ���� �迭�� ��Ÿ���� ������
public:
	Point(double xval = 0.0, double yval = 0.0) {
		points = new double[2];// �� ���� double�� �����ϴ� �迭�� �������� �Ҵ�
		points[0] = xval;// x ��ǥ ����
		points[1] = yval;// y ��ǥ ����
	}
	Point(const Point& other) {
		// �ʿ��� ��������ڸ� �����Ͽ���.
		points = new double[2];// �� ���� double�� �����ϴ� �迭�� �������� �Ҵ�
		points[0] = other.points[0];// �ٸ� Point ��ü�� x ��ǥ�� ����
		points[1] = other.points[1];// �ٸ� Point ��ü�� y ��ǥ�� ����
		std::cout << "������ ȣ�� " << std::endl;
		//print();// ���� ��ǥ ���
	}
	~Point() {
		// �Ҵ�� ���� �޸𸮸� ������ �� �ִ� �Ҹ��ڸ� �����Ͽ���.
		delete[] points;// �������� �Ҵ�� �޸� ����
		std::cout << "�Ҹ��� ȣ�� " << std::endl;
		//print();// ���� ��ǥ ���
	}
	void add(Point& r)
	{
		points[0] += r.points[0];// ���� x ��ǥ�� �ٸ� Point ��ü�� x ��ǥ ���ϱ�
		points[1] += r.points[1];// ���� y ��ǥ�� �ٸ� Point ��ü�� y ��ǥ ���ϱ�
	}
	void print() {
		std::cout << "(" << points[0] << "," << points[1] << ")" << std::endl;
	}
};

void add(Point& a, Point& b)
{
	a.add(b);// ù ��° Point ��ü a�� �� ��° Point ��ü b�� ����
}

int main()
{
	Point a(1.2, -2.8);// ù ��° Point ��ü a ����
	Point b{ a }; // �� ��° Point ��ü b�� a�� �ʱ�ȭ (���� ������ ȣ��)
	a.print();// ù ��° Point ��ü a�� ��ǥ ���
	b.print();// �� ��° Point ��ü b�� ��ǥ ���
	std:: cout << "add" << std::endl;
	add(a, b);
	a.print();// ù ��° Point ��ü a�� ��ǥ ��� (����� ��)
	b.print();// �� ��° Point ��ü b�� ��ǥ ��� (������� ����)
}