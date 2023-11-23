//p.447
#include <iostream>

double gildong(int);
double moonsoo(int);

void estimate(int lines, double (*pf)(int));

int main()
{
    int code;

    std::cout << " 필요한 행 수를 입력하세요 : ";
    std::cin >> code;

    std::cout << "홍길동의 시간 예상" << std::endl;
    estimate(code, gildong);
    std::cout << "박문수의 시간 예상" << std::endl;
    estimate(code, moonsoo);

    return 0;
}

double gildong(int lns)
{
    return 0.05 * lns;
}
double moonsoo(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}
void estimate(int lines, double (*pf)(int))//estimate:추청
{
    auto tmp = pf;
    std::cout << lines << "행을 작성하는데";
    std::cout << tmp(lines) << "시간이 걸립니다" << std::endl;
}