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
		case 3: std::cout << "사장님은 오늘 회사에 계셨습니다." << std::endl;
			break;
		case 4: comfort();
			break;
		default: std::cout << "그것은 선택할 수 없습니다." << std::endl;
		}
		showmenu();
		std::cin >> choice;
	}
	std::cout << "프로그램을 종료합니다." << std::endl;
	return 0;
}
void showmenu()
{
	std::cout << "-----------1,2,3,4,5번 중 하나 선택-----------" << std::endl;
	std::cout << "1) 경고음			2)보고서" << std::endl;
	std::cout << "3) 알리바이			4)격려사" << std::endl;
	std::cout << "5) 종료" << std::endl;
}
void report()
{
	std::cout << "이번 분기는 실적이 아주 좋습니다." << std::endl;
	std::cout << "판매량은 120% 늘었고, 비용은 35% 줄였습니다." << std::endl;
}
void comfort()
{
	std::cout << "사원들은 당신을 업계 최고의 CEO라고 생각하고 있습니다." << std::endl << "이사회도 당신을 업계 최고의 CEO라고 생각하고 있습니다." << std::endl;
}