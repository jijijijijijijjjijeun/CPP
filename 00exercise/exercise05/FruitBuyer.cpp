#include "FruitBuyer.h"
#include <iostream>

FruitBuyer::FruitBuyer()
{
	this->account = 4000;
	this->apple_number_buy = 0;
}

FruitBuyer::FruitBuyer(int alppe_price, int apple_number_buy)
{
	this->account = account;
	this->apple_number_buy = apple_number_buy;
}

FruitBuyer::~FruitBuyer()
{
	std::cout << "과일가게를 퇴장하였습니다." << std::endl;
	this->account = 4000;
	this->apple_number_buy = 0;
}

void FruitBuyer::price_of_apple_and_number_of_apple()
{
	std::cout << "현재잔액 : " << this->account << "원 입니다." << std::endl;
	std::cout << "사과 개수 : " << this->apple_number_buy << "원 입니다." << std::endl << std::endl;
}

void FruitBuyer::buy()
{
	int apple;
	std::cout << "몇개살까요? ";
	std::cin >> apple;
	std::cout << "사과 " << apple << "개를 구매했습니다." << std::endl<< std::endl;
	apple_number_buy = apple_number_buy + apple;
	this->account = this->account - (apple * 2000);
}