// Even or Odd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int Value;
    std::cout << "Enter a value\n";
    while (!(std::cin >> Value))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    if (Value != 0)
    {
        if (Value % 2 == 1)
        {
            std::cout << Value << " Is odd\n";
        }
        else
        {
            std::cout << Value << " Is even\n";
        }
    }
    std::cout << "\n";
    system("pause");
}

