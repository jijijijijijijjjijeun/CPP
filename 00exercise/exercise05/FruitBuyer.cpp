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
	std::cout << "���ϰ��Ը� �����Ͽ����ϴ�." << std::endl;
	this->account = 4000;
	this->apple_number_buy = 0;
}

void FruitBuyer::price_of_apple_and_number_of_apple()
{
	std::cout << "�����ܾ� : " << this->account << "�� �Դϴ�." << std::endl;
	std::cout << "��� ���� : " << this->apple_number_buy << "�� �Դϴ�." << std::endl << std::endl;
}

void FruitBuyer::buy()
{
	int apple;
	std::cout << "�����? ";
	std::cin >> apple;
	std::cout << "��� " << apple << "���� �����߽��ϴ�." << std::endl<< std::endl;
	apple_number_buy = apple_number_buy + apple;
	this->account = this->account - (apple * 2000);
}