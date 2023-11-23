//p.253
#include<iostream>

int main()
{
	int i = 0;
	while (i < 10)
	{
		++i;
	}
	int* ptr{ &i };
	*++ptr;	//* ++ ptr
	++*ptr;	//++ * ptr
	*ptr++;
	*(++ptr);
	int by = 10;
	i = i + by;	//update
	return 0;
}