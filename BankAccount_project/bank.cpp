#include "bank.h"
#include <iostream>

void Stock::set_total(/*this*/)	//this :0번쨰 매개변수라 2번 쓰면 안된다.
{
	(*this).total_val = this->shares * this->share_val;//(*this).total_val = this->total_val
}
void Stock::acquire(const std::string& company, long number, double price)
{								//클래스라서 참조 연산
	if (number < 0)
	{
		std::cout << "주식은 음수가 될 수 없습니다." << std::endl;
		this->shares = 0;
		return;
	}
	this->shares = number;
	this->company = company;
	this->share_val = price;
	this->set_total();
}
void Stock::buy(long number, double price)
{
	if (number < 0)
	{
		std::cout << "주식은 음수가 될 수 없습니다." << std::endl;
		return;
	}
	this->shares += number;
	this->share_val += price;
	this->set_total();
}
void Stock::sell(long number, double price)
{
	if (number < 0)
	{
		std::cout << "주식은 음수가 될 수 없습니다." << std::endl;
	}
	else if (number > this->shares)
	{
		std::cout << "보유주식보다 많으면 안됩니다." << std::endl;
	}
	else
	{
		this->shares = number;
		this->share_val = price;
		this->set_total();
	}
}
void Stock::update(double price)
{
	this->share_val = price;
	this->set_total();
}
void Stock::show()
{
	std::cout << "회사명 :" << this->company << std::endl;
	std::cout << "주식수 : " << this->shares << std::endl;
	std::cout << "주가 $" << this->share_val << std::endl;
	std::cout << "주식 총 가치 : " << this->total_val << std::endl;
}
Stock::Stock()
{
	this->company = "";		//초기값 설정할때 많이 쓴다.
	this->shares = 0L;		//초기값 설정할때 많이 쓴다.
	this->share_val = 0.0;	//초기값 설정할때 많이 쓴다.
	this->total_val = 0.0;	//초기값 설정할때 많이 쓴다.
	std::cout << "내가 만든 Default 생성자" << std::endl;
}
Stock::~Stock(/*this*/) // 0번째 매개변수
{
	std::cout << "소멸자" << std::endl;
}
Stock::Stock(/*this*/ std::string company, long number, double price)
{
	if (number < 0)
	{
		std::cout << "음수를 가질 수 없습니다." << std::endl;
		return;
	}
	this->company = company;
	this->shares = number;
	this->share_val = price;
}
const Stock& Stock::topvalue(const Stock& stock) const	//대입연산자 금지
{
	if (stock.total_val > this->total_val)
	{
		return stock;
	}
	return (*this);		//주소로 가라
}