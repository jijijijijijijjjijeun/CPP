// sqrt.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>                     //<cmath>  , 기본 디렉토리 
#include <cmath>                        //"cmath"  , 현재 내 폴더에 있는 사용자용
double area{ 0.0 };
double squre(double area)
{
    const double result{ area * area };
    return result;
}
int main()
{
    //double area{ 0.0 };  auto area{0.0} => double  (int, double이 기본형)
    //float area2{ 0.0F };
    std::cout << "마루 면적을 평방피트 단위로 입력하시오\n";
    std::cin >> area;
    double side;
    side = sqrt(area);                   //sqrt(area) = (*sqrt)(area)
    std::cout << "사각형 마루라면 한변이 " << side << " 피트에 상당합니다." << std::endl;
    std::cout << "멋지네요!" << std::endl;
    std::cout << "제곱은 " << squre(area) << std::endl;
    return 0;
}