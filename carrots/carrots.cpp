// carrots.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>

int main()
{
	//int carrot;						//int => 32비트 = 8바이트 * 4개, 4chunk 
										//변수 => 주소
	//carrot = 25;						//set
	//carrot;							//get

	int carrot = { 25 };				//선언과 초기화를 동시에 하는 것을 선호

	std::cout << "나는 당근을 ";
	std::cout << carrot;
	std::cout << "개 가지고 있다.";
	std::cout << std::endl;
	carrot = carrot - 1;				//24 side effect :부작용, 원본값이 변경될 때(대입연산자)
	std::cout << "아삭아삭, 이제 당근은 " << carrot << "개이다." << std::endl;
	return 0;
}