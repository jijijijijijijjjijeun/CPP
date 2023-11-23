//더블 포인터(2차원 배열)
#include <iostream>

int main()
{
	int values[] = { 1,2,3 };
	values[0];
	int number1 = 100;
	int number2 = 200;
	int number3 = 300;
	int * numbers[3] = { &number1,&number2,&number3 }; // 주소를 담고 있음
	//char strs[] = {"Hello","World","Android"};
	*numbers[0];		//100
	*(*(numbers + 0));	//100
	const char* strs[] = { "Hello", "World", "Android" };
	//{const char*, const char*, const char*}				//주소
	//*strs[0] == *(*(str + 0 )), *strs[1],* strs[2]		//값

	return 0;
}