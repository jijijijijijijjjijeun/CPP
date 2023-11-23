//p.413
#include <iostream>

void show_array(int (*ptr_array)[4], int row, int colomn)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colomn ;j++)
		{
			//std::cout << ptr_array[i][j] << "\t";
			std::cout << *(*(ptr_array + i) + j) << "\t";
		}
		std::cout << std::endl;
	}
}
int main()
{
	int data[][4]{ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	show_array(data, sizeof data / sizeof data[0], sizeof data[0] / sizeof data[0][0]);
}