#include <iostream>								//����ó����

//using namespace std;								//���������� ���� ���� ��ȣ���� �ʴ´�.
int main(int argc, const char* argv[])				//int ��ȯ��, argue : �����ϴ�, �����ִ�.
{
	//using namespace std;							// �̰� �Ⱦ� �� std::cout ���� �����
	//cout << "C++����� ������";					//std::cout std�ȿ� �ִ�  namespace�� ���ڴٰ� ���
	//cout << endl;									//std::cout���� ���� ���� ��ȣ
	//cout << "��ȸ����";
	//cout << endl;
	//cin.get();									// ȭ��� ������ ���� ����, ���ڸ� �Է¹ޱ� ���ؼ� ���ŷ

	
	printf("%d \r\n", argc);
	printf("%s \r\n", argv[0]);
	printf("%s \r\n", argv[1]);
	printf("%s \r\n", argv[2]);

	std::cout << argc << std::endl;
	std::cout << argv[0] << std::endl;
	std::cout << argv[1] << std::endl;
	std::cout << argv[2] << std::endl;


	return 0;
}
//main();  �����Լ� ȣ���� os�� ���� , return 0; ���� 0 �� ���� ������ ����
//								     , return 1; 0�̿��� ���� ���� ������ ����(����)�� �ִٰ� �ν�