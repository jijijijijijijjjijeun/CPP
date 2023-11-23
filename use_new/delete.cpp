//문법적인 오류는 없지만 위험한 코드
//ps,pq가 같이 int를 보고있음
#include <iostream>

int main()
{
	int* ps = new int;
	int* pq = ps;
	*pq = 100;
	delete ps;				  //메모리가 사라짐
	ps = nullptr;
	*pq = 200;
	return 0;				 //런타임에서 os가 막음
}
