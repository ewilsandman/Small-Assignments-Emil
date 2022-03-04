// Absolute Difference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


int main()
{
    float float1;
    float float2;
    float OpositeSides(float float1, float float2);
    float SameSides(float float1, float float2);
    float ABS(float ToABS);
    std::string exitthing;
    std::cout << "Type a float\n";
    while (!(std::cin >> float1))
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    std::cout << "Now a second float\n";
    while (!(std::cin >> float2)) 
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid value, try again.\n";
    }
    if (float1 == 0 && float2 == 0)
    {
        std::cout << "ABS Difference = 0";
    }
    else if (float1 == 0)
    {
        std::cout << "ABS Difference = " << ABS(float2);
    }
    else if (float2 == 0)
    {
        std::cout << "ABS Difference = " << ABS(float1);
    }
    else if (float1 * float2 < 0) // on oposite side of 0
    {
        std::cout << "ABS Difference = " << OpositeSides(float1, float2);
    }
    else
    {
        std::cout << "ABS Difference = " << SameSides(float1, float2);
    }
    std::cout << "\n";
    system("pause");
}
float OpositeSides(float float1, float float2)
{
    float ABS(float ToABS);
    float Product = float1 - float2;
    return ABS(Product);
}
float SameSides(float float1, float float2)
{
    float ABS(float ToABS);
    float Product = float1 - float2;
    return ABS(Product);
}
float ABS(float ToABS)
{
    if (ToABS < 0)
    { 
        ToABS = -ToABS;
    }
    return ToABS;
}


/*The plan 
check if any value is 0, if it is, take the ABS of the other value
if both values are on the same side of 0 subtract them then abs
if the values are on oposite sides add them then ABS

*/