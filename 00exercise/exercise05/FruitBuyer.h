#pragma once
#include <iostream>
#include <vector>
class FruitBuyer
{
private:
	int account;				//소비자가 소유하고 있는 잔고
	int apple_number_buy;		//구매한 사과 개수
	std::vector<FruitSeller> _vec;
public:
	FruitBuyer(int alppe_price, int apple_number_buy);
	FruitBuyer();
	~FruitBuyer();
	void price_of_apple_and_number_of_apple();
	void buy();
};
