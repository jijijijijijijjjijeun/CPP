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
	std::cout << "���� ���Ը� �̿��� �ּż� �����մϴ�." << std::endl;
	this->alppe_price = 2000;
	this->apple_number = 10;
	this->apple_profit = 0;
}

void FruitSeller::price_of_apple()
{
	std::cout << "��� ��� : " << this->alppe_price << "�� �Դϴ�." << std::endl << std::endl;
}

void FruitSeller::number_of_apple(FruitBuyer&)
{
	std::cout << "��� ��� : " << this->apple_number << "�� ���ҽ��ϴ�." << std::endl << std::endl;
}

void FruitSeller::now_profit(FruitBuyer&)
{
	std::cout << "��� ��� : " << this->apple_profit << "�� �������ϴ�." << std::endl << std::endl;
}
