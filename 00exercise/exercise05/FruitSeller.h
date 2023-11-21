#pragma once
#include <iostream>
#include <vector>
#include "FruitBuyer.h"
class FruitSeller
{
private:
	int alppe_price;		//사과가격
	int apple_number;		//판매자가 가지고 있는 사과 개수
	double apple_profit;	//판매자 수익
	std::vector<FruitBuyer> _vec;
public:
	FruitSeller(int alppe_price, int apple_number, double apple_profit);
	FruitSeller();
	~FruitSeller();
	void price_of_apple();
	void number_of_apple(FruitBuyer&);
	void now_profit(FruitBuyer&);
};

