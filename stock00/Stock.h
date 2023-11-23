//p.639
//선언만 함
#pragma once
#include <iostream>
class Stock
{
private://응집도 높다, 캡술화, 은닉
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_total(); 
public:
	Stock(); //return타입이 없는 디폴트 생성자 = > 사용자 생성자
	Stock(const std::string company, long number, double price);
	~Stock();
	void acquire(const std::string& company, long number, double price);
	void buy(long number, double price);
	void sell(long number, double price);
	void update(double price);
	void show(); //동사형으로 만듬
	const Stock& topvalue(const Stock& stock) const;
};





