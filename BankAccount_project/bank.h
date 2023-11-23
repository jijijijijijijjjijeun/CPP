#pragma once
#include <iostream>
class Stock
{
private://������ ����, ĸ��ȭ, ����
	std::string name;
	long bank_account;
	double money;
	double total_val;
	double left_money();
public:
	Stock(); //returnŸ���� ���� ����Ʈ ������ = > ����� ������
	Stock(const std::string name, double money, double left_money);
	~Stock();
	void acquire(const std::string& company, long number, double price);
	void buy(long number, double price);
	void sell(long number, double price);
	void update(double price);
	void show(); //���������� ����
	const Stock& topvalue(const Stock& stock) const;
};
