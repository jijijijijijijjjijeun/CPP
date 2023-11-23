// arry_size.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdbool>
#define MAX_LENGTH 1024

int main()
{
    int array_size = 0;
    std::cout << "배열 몇개 필요해?\n";
    std::cin >> array_size;
    int numbers[array_size] = { 0 }; //400bytes
}