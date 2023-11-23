// HelloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>            //.h가 안 붙음(c++) but c에서 온 헤더는 붙음 #include <stdio.h>  
							   // stream ?  : >>(출력) , <<(입력)
//#include <stdio.h>           //#:매크로 , 선행처리기
//#include <cstdio>			   //printf함수 속해 있음.
#define PI 3.141592;		   // 매크로 != 전역변수 , 치환일뿐 , 전역변수는 자료형이 있어야 한다.
#define SEMICOLON ;

int main()
{
	//double pi = PI
	//double pi{ 3.14 };		//초기화, 딱 한번만 
	//auto pi = PI		//지역변수일때만 auto를 쓸 경우 자료형 생략 가능 
	//int value = 30 SEMICOLON
	//printf("%1f , %d\n", pi, value)SEMICOLON  //함수 => 연산자 => ()존재
	printf("Hello World!\n");
	std::cout << "Hello World!" << std::endl;   //std안에 out에 넣어라!
	std::cout << "Hello World!\n";
}
