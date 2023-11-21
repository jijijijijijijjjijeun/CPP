#include <iostream>

class Point {
private:
    double xval, yval;

public:
    Point(double xval = 0.0, double yval = 0.0) {
        this->xval = xval;
        this->yval = yval;
    }

    void swap(Point& other) {
        double temp_x = this->xval;
        double temp_y = this->yval;
        this->xval = other.xval;
        this->yval = other.yval;
        other.xval = temp_x;
        other.yval = temp_y;
    }

    void print() {
        std::cout << "(" << this->xval << "," << this->yval << ")" << std::endl;
    }
};

void swap(Point& a, Point& b) {
    a.swap(b);
}

int main() {
    Point a(1.2, -2.8);
    Point b(3.1, 6.2);

    a.print();
    b.print();

    std::cout << "Swap" << std::endl;
    swap(a, b);

    a.print();
    b.print();

    return 0;
}