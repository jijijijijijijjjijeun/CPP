#pragma once
#include <iostream>
#include <vector>
class FruitBuyer
{
private:
	int account;				//�Һ��ڰ� �����ϰ� �ִ� �ܰ�
	int apple_number_buy;		//������ ��� ����
	std::vector<FruitSeller> _vec;
public:
	FruitBuyer(int alppe_price, int apple_number_buy);
	FruitBuyer();
	~FruitBuyer();
	void price_of_apple_and_number_of_apple();
	void buy();
};
