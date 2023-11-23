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
	BankAccount(std::string name, long long account_number, long pin_number, long long deposit_money,
				const char* client_class, std::string gender, long phone_number, std::string address);
	BankAccount();
	~BankAccount();
	double get_money();	//잔액
	std::string get_name();
	static void now_account(BankAccount* client, int user);			//현재 잔고(비밀번호), 출력용
	static void find_max_deposit(BankAccount* client, int user);			//최대금액 찾기
	static void withdraw(BankAccount* client, int user);			//출금(비밀번호)
	static void deposit(BankAccount* client, int user);				//입금
	static void fine_smae_name(BankAccount* client, int user);		//이름으로 검색
	static void find_client_class(BankAccount* client, int user);	//등급조회
	static void search_account(BankAccount* client, int user);		//계좌로 검색
	static void find_accout(BankAccount* client, int user);			//정보로 계좌 찾기
	void show();	//고객 정보 입력
	static void menu();		//메뉴창
};