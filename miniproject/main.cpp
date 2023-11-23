 #include <iostream>
#include "BankAccount.h"  
#include "BankAccountControl.h"  

int main()
{
    //BankAccount bank1{ "10920-1093", "Karl", "Cheng ju", MALE };
    //bank1.input_password();
    //int name{ int(0) };
    BankAccountControl bank_control;
    size_t account_size{ 0u };
    std::cout << "몇개의 계정을 만들건가요? ";
    std::cin >> account_size;
    if (account_size <= 0)
    {
        return 1;   //프로그램 종료
    }
    BankAccount::set_indexer(account_size);
    for (int i = 0; i < account_size; i++)
    {
        BankAccount bank = BankAccount(); 
        bank_control.input_account_bank(bank);
        bank_control.add_account_bank(bank);
    }
    while (1)
    {
        bank_control.search_account_bank();
    }
    return int{ 0 };  // 임시 생성자를 통한 임시 객체
}
