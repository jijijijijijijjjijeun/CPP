//p.262
#include <iostream>

int main()
{
	int quizscores[]{ 20,20,20,20,20,19,20,18,20,20 };
	//�ݺ�, ���ǹ�(if, swich)�˰���
	int count = 0;
	for (int index = 0; index < sizeof quizscores / sizeof quizscores[0]; index++)
	{	
		if (quizscores[index] == 20)
		{
			++count;
			std::cout << count << "�� ���� 20 " << std::endl;
		}
	}
}
