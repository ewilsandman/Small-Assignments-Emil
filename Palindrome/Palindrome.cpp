// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    int length;
    std::string Value;
    std::string Reverse;
    bool palindrome = true;
    std::cout << "Enter a word\n";
    while (!(std::cin >> Value))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    length = Value.length();
    for (int i = 0; i <= length; i++) // constructs a reverse string
    {
        if (i == 0)
        {
            Reverse.replace(i, 1, &Value[length - i]);
        }
        else
        {
            Reverse.append(&Value[length - i], 1);
        }
    }
    for (size_t i = 0; i < length; i++)
    {
        if(Value[i] == Reverse[i])
        {}
        else
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
    {
        std::cout << Value << " Is a palindrome \n";
    }
    else
    {
        std::cout << Value << " Is not a palindrome \n";
    }
    std::cout << "\n";
    system("pause");
}
 /*
A palindrome is a word that is spelled the same way backwards, like “eye”. 
Implement a method with a string parameter and evaluates whether the word is a palindrome or not. 
 
• Do not use any STL functionality
 */