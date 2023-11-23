#include "bank.h"
#include <iostream>

void Stock::set_total(/*this*/)	//this :0���� �Ű������� 2�� ���� �ȵȴ�.
{
	(*this).total_val = this->shares * this->share_val;//(*this).total_val = this->total_val
}
void Stock::acquire(const std::string& company, long number, double price)
{								//Ŭ������ ���� ����
	if (number < 0)
	{
		std::cout << "�ֽ��� ������ �� �� �����ϴ�." << std::endl;
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
		std::cout << "�ֽ��� ������ �� �� �����ϴ�." << std::endl;
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
		std::cout << "�ֽ��� ������ �� �� �����ϴ�." << std::endl;
	}
	else if (number > this->shares)
	{
		std::cout << "�����ֽĺ��� ������ �ȵ˴ϴ�." << std::endl;
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
	std::cout << "ȸ��� :" << this->company << std::endl;
	std::cout << "�ֽļ� : " << this->shares << std::endl;
	std::cout << "�ְ� $" << this->share_val << std::endl;
	std::cout << "�ֽ� �� ��ġ : " << this->total_val << std::endl;
}
Stock::Stock()
{
	this->company = "";		//�ʱⰪ �����Ҷ� ���� ����.
	this->shares = 0L;		//�ʱⰪ �����Ҷ� ���� ����.
	this->share_val = 0.0;	//�ʱⰪ �����Ҷ� ���� ����.
	this->total_val = 0.0;	//�ʱⰪ �����Ҷ� ���� ����.
	std::cout << "���� ���� Default ������" << std::endl;
}
Stock::~Stock(/*this*/) // 0��° �Ű�����
{
	std::cout << "�Ҹ���" << std::endl;
}
Stock::Stock(/*this*/ std::string company, long number, double price)
{
	if (number < 0)
	{
		std::cout << "������ ���� �� �����ϴ�." << std::endl;
		return;
	}
	this->company = company;
	this->shares = number;
	this->share_val = price;
}
const Stock& Stock::topvalue(const Stock& stock) const	//���Կ����� ����
{
	if (stock.total_val > this->total_val)
	{
		return stock;
	}
	return (*this);		//�ּҷ� ����
}