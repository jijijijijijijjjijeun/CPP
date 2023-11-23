#include <iostream>
#include "FruitSeller.h"
#include "FruitBuyer.h"

int main()
{
    FruitSeller fruit_seller;
    FruitBuyer fruit_buyer;
    int ch;
    while (1)
    {
        std::cout << "1.사과장수에게 사과 가격을 물어본다." << std::endl;
        std::cout << "2. 사과장수에게 사과가 몇 개 남았는지 물어본다." << std::endl;
        std::cout << "3. 사과장수에게 현재까지의 판매수익을 물어본다" << std::endl;
        std::cout << "4. 가지고 있는 돈과 사과개수를 확인한다." << std::endl;
        std::cout << "5. 사과를 구매한다." << std::endl;
        std::cout << "무엇을 할까요 ? ";
        std::cin >> ch;
        if (ch == 1)
        {
            fruit_seller.price_of_apple();
            
        }
        else if (ch == 2)
        {
            fruit_seller.number_of_apple();
            
        }
        else if (ch == 3)
        {
            fruit_seller.now_profit();
        }
        else if (ch == 4)
        {
            fruit_buyer.price_of_apple_and_number_of_apple();
        }
        else if (ch == 5)
        {
            fruit_buyer.buy();
        }
        else
        {
            break;
        }
    }
   
}

