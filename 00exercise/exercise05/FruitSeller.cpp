#include "FruitSeller.h"
#include <iostream>
FruitSeller::FruitSeller()
{
	this->alppe_price = 2000;
	this->apple_number = 10;
	this->apple_profit = 0;
}

FruitSeller::FruitSeller(int alppe_price, int apple_number, double apple_profit)
{
	this->alppe_price = alppe_price;
	this->apple_number = apple_number;
	this->apple_profit = apple_profit;
}

FruitSeller::~FruitSeller()
{
	std::cout << "저희 가게를 이용해 주셔서 감사합니다." << std::endl;
	this->alppe_price = 2000;
	this->apple_number = 10;
	this->apple_profit = 0;
}

void FruitSeller::price_of_apple()
{
	std::cout << "사과 장수 : " << this->alppe_price << "원 입니다." << std::endl << std::endl;
}

void FruitSeller::number_of_apple(FruitBuyer&)
{
	std::cout << "사과 장수 : " << this->apple_number << "개 남았습니다." << std::endl << std::endl;
}

void FruitSeller::now_profit(FruitBuyer&)
{
	std::cout << "사과 장수 : " << this->apple_profit << "원 벌었습니다." << std::endl << std::endl;
}
