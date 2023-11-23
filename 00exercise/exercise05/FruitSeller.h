#pragma once
#include <iostream>
#include <vector>
#include "FruitBuyer.h"
class FruitSeller
{
private:
	int alppe_price;		//�������
	int apple_number;		//�Ǹ��ڰ� ������ �ִ� ��� ����
	double apple_profit;	//�Ǹ��� ����
	std::vector<FruitBuyer> _vec;
public:
	FruitSeller(int alppe_price, int apple_number, double apple_profit);
	FruitSeller();
	~FruitSeller();
	void price_of_apple();
	void number_of_apple(FruitBuyer&);
	void now_profit(FruitBuyer&);
};

