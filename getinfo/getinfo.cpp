// getinfo.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	std::cout << "당근을 몇개 가지고 있니?  ";
	int carrot{ 0 };
	scanf_s("%d", &carrot);
	std::cout << "너 당근 " << carrot << "개를 가지고 있구나" << std::endl;
	std::cout << "다시 당근 개수 :   ";
	std::cin >> carrot;
	std::cout << "이제 당근을 " << carrot << "개를 가지고 있구나";
}