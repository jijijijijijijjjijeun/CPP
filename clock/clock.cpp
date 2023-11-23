//p.275
#include <iostream>

int main()
{
	int sec;
	std::cout << "원하는 초 입력 : " ;
	std::cin >> sec;
	const unsigned int DELAY{ 1'000U * sec };//1초
	time_t next_time{ 0u };
	while (true)
	{
		time_t previous_time{ clock() };
		//std::cout << previous_time << std::endl;
		if (previous_time - next_time >= DELAY)
		{
			next_time = clock();
			//std::cout << next_time << std::endl;
			std::cout << sec << "초 지났습니다." << std::endl;
		}
	}
}