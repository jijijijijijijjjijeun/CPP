//p.334
#include <iostream>
void showmenu();
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	std::cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case 1: std::cout << "\a" << std::endl;
			break;
		case 2: report();
			break;
		case 3: std::cout << "������� ���� ȸ�翡 ��̽��ϴ�." << std::endl;
			break;
		case 4: comfort();
			break;
		default: std::cout << "�װ��� ������ �� �����ϴ�." << std::endl;
		}
		showmenu();
		std::cin >> choice;
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;
	return 0;
}
void showmenu()
{
	std::cout << "-----------1,2,3,4,5�� �� �ϳ� ����-----------" << std::endl;
	std::cout << "1) �����			2)����" << std::endl;
	std::cout << "3) �˸�����			4)�ݷ���" << std::endl;
	std::cout << "5) ����" << std::endl;
}
void report()
{
	std::cout << "�̹� �б�� ������ ���� �����ϴ�." << std::endl;
	std::cout << "�Ǹŷ��� 120% �þ���, ����� 35% �ٿ����ϴ�." << std::endl;
}
void comfort()
{
	std::cout << "������� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�." << std::endl << "�̻�ȸ�� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�." << std::endl;
}