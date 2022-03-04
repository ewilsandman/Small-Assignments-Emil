// Last digit.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    std::cout << " The last digit is " << Value % 10;
    std::cout << "\n";
    system("pause");
}
