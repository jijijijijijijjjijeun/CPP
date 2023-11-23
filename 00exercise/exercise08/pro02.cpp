#include <iostream>

class Point {
private:
	double* points;// 좌표를 저장하는 동적 배열을 나타내는 포인터
public:
	Point(double xval = 0.0, double yval = 0.0) {
		points = new double[2];// 두 개의 double을 저장하는 배열을 동적으로 할당
		points[0] = xval;// x 좌표 설정
		points[1] = yval;// y 좌표 설정
	}
	Point(const Point& other) {
		// 필요한 복사생성자를 정의하여라.
		points = new double[2];// 두 개의 double을 저장하는 배열을 동적으로 할당
		points[0] = other.points[0];// 다른 Point 객체의 x 좌표를 복사
		points[1] = other.points[1];// 다른 Point 객체의 y 좌표를 복사
		std::cout << "생성자 호출 " << std::endl;
		//print();// 현재 좌표 출력
	}
	~Point() {
		// 할당된 동적 메모리를 해제할 수 있는 소멸자를 정의하여라.
		delete[] points;// 동적으로 할당된 메모리 해제
		std::cout << "소멸자 호출 " << std::endl;
		//print();// 현재 좌표 출력
	}
	void add(Point& r)
	{
		points[0] += r.points[0];// 현재 x 좌표에 다른 Point 객체의 x 좌표 더하기
		points[1] += r.points[1];// 현재 y 좌표에 다른 Point 객체의 y 좌표 더하기
	}
	void print() {
		std::cout << "(" << points[0] << "," << points[1] << ")" << std::endl;
	}
};

void add(Point& a, Point& b)
{
	a.add(b);// 첫 번째 Point 객체 a에 두 번째 Point 객체 b를 더함
}

int main()
{
	Point a(1.2, -2.8);// 첫 번째 Point 객체 a 생성
	Point b{ a }; // 두 번째 Point 객체 b를 a로 초기화 (복사 생성자 호출)
	a.print();// 첫 번째 Point 객체 a의 좌표 출력
	b.print();// 두 번째 Point 객체 b의 좌표 출력
	std:: cout << "add" << std::endl;
	add(a, b);
	a.print();// 첫 번째 Point 객체 a의 좌표 출력 (변경된 값)
	b.print();// 두 번째 Point 객체 b의 좌표 출력 (변경되지 않음)
}