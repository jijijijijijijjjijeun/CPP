//p.344
#include <iostream>

int main()
{
    double fish[5];
    int max = 0;

    std::cout << "when you want finish, you can input 'q'" << std::endl;
    std::cout << "Input max value : ";
    std::cin >> max;
    std::cout << "Input fish weight" << std::endl;
    //std::cout << "You can catch up to" << 5 << " fish" << std::endl;
    std::cout << "fish #1 : ";
    int i = 0;
    while (i < 5 && std::cin >> fish[i])
    {
        if (++i < 5)
        {
            std::cout << "fish #" << i + 1 << " : ";
        }
    }

    double total = 0.0;
    for (int j = 0; j < i; j++)
    {
        total = total + fish[j];
    }if (i == 0)
    {
        std::cout << "You didn't catch a fish" << std::endl;
    }
    else
    {
        std::cout << i << " fish's average weight is " << total / i << "g" << std::endl;
    }


    return 0;
}