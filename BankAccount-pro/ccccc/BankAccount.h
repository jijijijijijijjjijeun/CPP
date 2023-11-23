#pragma once
#include "BankAccount.h"
#include <iostream>
#include <string>
#include <iomanip>	//화면에 출력되는 잔액표현(서식)
#include <cctype> 
#include <cstdlib>	//system("cls")

class BankAccount
{
private:
	std::string name;
	long long account_number;
	long pin_number;
	long long deposit_money;
	const char* client_class;
	std::string gender;
	long phone_number;
	std::string address;

public:
	BankAccount(std::string name, long long account_number,  long pin_number, long long deposit_money,
				const char* client_class , std::string gender,  long phone_number, std::string address);
	BankAccount();
	~BankAccount();
	double get_money() const;	//잔액
	void now_account();			//현재 잔고(비밀번호), 출력용
	void withdraw();			//출금(비밀번호)
	void deposit();				//입금
	void fine_smae_name();		//이름으로 검색
	void find_client_class();	//등급조회
	void search_account();		//계좌로 검색
	void find_accout();			//정보로 계좌 찾기
	void show();				//고객 정보 입력
	void menu();				//메뉴창
};