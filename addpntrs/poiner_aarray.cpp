#include <iostream>

int main()
{
	int tacos[] = { 5,2,8,4,1,2,2,4,6,8 };
	int* ptr = tacos;
	ptr = ptr + 1;				//tacos[1]의 주소
	*ptr;						//tacos[1]의 값 : 2
	int* pe = &(tacos[9]);		//tacos[9]의 주소
	pe = pe - 1;
	//변수[i] == *(변수 + i)
}