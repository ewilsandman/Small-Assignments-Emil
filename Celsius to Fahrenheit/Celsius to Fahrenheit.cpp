// Celsius to Fahrenheit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float Celsius; // The value will lose precision when using integers as they do not support decimal values
    float Fahr;
    std::cout << "Enter a value in Celsius\n";
    while (!(std::cin >> Celsius))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    Fahr = Celsius * 9 / 5 + 32;
    std::cout << Celsius << " In Celsius is " << Fahr << " in Fahrenheit";
    std::cout << "\n";
    system("pause");
}


/* The plan
Take and verify input
Convert
Display
*/