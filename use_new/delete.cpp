//�������� ������ ������ ������ �ڵ�
//ps,pq�� ���� int�� ��������
#include <iostream>

int main()
{
	int* ps = new int;
	int* pq = ps;
	*pq = 100;
	delete ps;				  //�޸𸮰� �����
	ps = nullptr;
	*pq = 200;
	return 0;				 //��Ÿ�ӿ��� os�� ����
}
