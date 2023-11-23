//코드를 간단하게 만듬, 함수를 변수처럼 쓸수 있음
//4. 사용자의 정의 연산을 인자로 전달할때, 함수 포인터를 쓴다
#include <iostream>
#include <functional>
int func1(int, int);
int func2(int, int);

int* func3(int, int);	//함수
int (*ptr_functor)(int, int);	//함수포인터

int func_pointer(int(*ptr_param)(int, int));
int main()
{	
	int value_a = 20;
	int value_b = 30;
	//int result = func(value_a, value_b);
	int result = (*func1)(value_a, value_b);
	std::cout << result << std::endl;
	int(*ptr_func)(int, int) = nullptr; // 함수 포인터 nullptr로 초기화
	//ptr_func = func();  //안된다 func 자체가 주소이기에	func()호출시 사용
	ptr_func = func1;	  //ptr_func = &func; 이것도 가능
	result = ptr_func(value_a, value_b);
	std::cout << result << std::endl;

	func_pointer(func1);
	std::cout << func_pointer(func1) << std::endl;
	std::cout << func_pointer(func2) << std::endl;
	//call back function
	return 0;
}

int func1(int param_a, int param_b)
{
	return param_a + param_b;
}
int func2(int param_a, int param_b)
{
	return param_a - param_b;
}
int func_pointer(int(*ptr_param)(int a, int b))
{
	int result = ptr_param(30000 , 20000);
	return result;
}