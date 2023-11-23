#include <iostream>
#include <cctype> 

int main() {
    
    std::string str = "jamboree";
    for (int i = 0; i <= 7; ++i) {
        if (i < 3)
        {
            std::cout.put(toupper(str[i]));
        }
        else
        {
            std::cout.put(str[i]);
        }
    }
 
    return 0;
}