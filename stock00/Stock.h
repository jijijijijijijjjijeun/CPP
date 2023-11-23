//p.639
//���� ��
#pragma once
#include <iostream>
class Stock
{
private://������ ����, ĸ��ȭ, ����
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_total(); 
public:
	Stock(); //returnŸ���� ���� ����Ʈ ������ = > ����� ������
	Stock(const std::string company, long number, double price);
	~Stock();
	void acquire(const std::string& company, long number, double price);
	void buy(long number, double price);
	void sell(long number, double price);
	void update(double price);
	void show(); //���������� ����
	const Stock& topvalue(const Stock& stock) const;
};





