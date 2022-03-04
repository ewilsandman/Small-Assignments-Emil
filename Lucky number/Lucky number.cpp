// Lucky number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    bool Luck = true;
    int Value;
    std::cout << "Enter a int\n";
    while (!(std::cin >> Value))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid int, try again.\n";
    }
    int BackupValue = Value;
    int Length = 0;
    while (Value) // once to get the lenght
    {
        Value /= 10;
        Length++;
    }
    Value = BackupValue;
    short* ShortArray = new short[Length - 1];
    for (size_t i = 0; i < Length; i++)
    {
        ShortArray[i] = BackupValue % 10;
        BackupValue  /= 10;
    }
    short value1 = 0;
    short value2 = 0;
    for (size_t a = 0; a < Length; a++)
    {
        if(!Luck)
        {
            break;
        }
        value1 = ShortArray[a];
        for (size_t b = Length; b > 0; b--)
        {
            value2 = ShortArray[b - 1];
            if (a == b - 1)
            {}
            else
            {
                if (value1 == value2)
                {
                    Luck = false;
                }
            }
        }
    }
    switch (Luck)
    {
    case true:
        std::cout << Value << " Is a lucky number\n";
    break;
    case false:
        std::cout << Value << " Is not a lucky number\n";
    break;
    default:
    break;
    }
    std::cout << "\n";
    system("pause");
}


/*
The plan
recive and verify int
Divide int into chars
check each char with each other char untill a duplicate has been found
if no duplicate found, sucess
*/

