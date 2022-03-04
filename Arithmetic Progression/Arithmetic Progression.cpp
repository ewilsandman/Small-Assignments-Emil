// Arithmetic Progression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int Values[4];
    std::cout << "Enter value 1\n";
    while (!(std::cin >> Values[0]))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    std::cout << "Enter value 2\n";
    while (!(std::cin >> Values[1]))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    std::cout << "Enter value 3\n";
    while (!(std::cin >> Values[2]))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    std::cout << "Enter value 4\n";
    while (!(std::cin >> Values[3]))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    
    if (Values[1] - Values[0] == Values[2] - Values[1] && Values[2] - Values[1] == Values[3] - Values[2])
    {
        std::cout << "Series has Arithmetic progression";
    }
    else
    {
        std::cout << "Series does not have Arithmetic progression";
    }
    std::cout << "\n";
    system("pause");
}
/*
Will assume that only int values should be treated here
Arithmetic progression is when the difference between each successive pair of values in a series of numbers
are the same.
Given the values: 2, 4, 6, 8 the difference between is always two meaning it have arithmetic progression.
Write a program with a function that returns whether a series of numbers have arithmetic progression or not.
• No constraints.
*/
