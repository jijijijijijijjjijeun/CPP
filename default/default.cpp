//p.505
#include <iostream>

int func1(int param1, int param2, int param3 )
{
	return param1 + param2 + param3;
}
int func2(int param1, int param2, int param3 = 300)	//int param3 = 300 : default 파라미터 인자 값을 입력하지 않았을때 자동으로 입력되는 값
{
	return param1 + param2 + param3;
}
int func3(int param1, int param2 = 200, int param3 = 300)
{
	return param1 + param2 + param3;
}
//int func4(int param1, int param2 = 200, int param3)
//{
//	return param1 + param2 + param3;
//}
int func5(int param1 = 100, int param2 = 200, int param3 = 300)
{
	return param1 + param2 + param3;
}

int main()
{
	int result1 = func1(100, 200, 300);
	std::cout << result1 << std::endl;		//600
	//인자를 2개만 넣는다면? 인자를 입력하지 않으면 앞에 선언된 값을 사용하겠다
	int result2 = func2(100, 200);
	std::cout << result2 << std::endl;		//600
	int result3 = func2(100, 200, 0);
	std::cout << result3 << std::endl;		//300
	int result4 = func3(1, 2);
	std::cout << result4 << std::endl;		//303
	int result5 = func3(100, 1000);
	std::cout << result5 << std::endl;		//1400
	//int result6 = func4(1, 2);
	//std::cout << result6 << std::endl;	//오류
	int result7 = func5();
	std::cout << result7 << std::endl;		//600
}
