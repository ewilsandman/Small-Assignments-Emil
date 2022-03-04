// Guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main()
{
    int Totalguesses = 0;
    bool Won = false;
    std::random_device rd; //algorithm for random number generation form StackOverflow
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10);
    int Correct = distr(gen);
    int Guessed;
    while (!Won)
    {
        std::cout << "Guess a value between 1 and 10\n";
        while (!(std::cin >> Guessed))
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid value, try again.\n";
        }
        if (Guessed != Correct)
        {
            Totalguesses++;
            std::cout << "Incorrect, guess again.\n";
        }
        else
        {
            std::cout << "Correct, You won in " <<Totalguesses + 1 << " Guesses.\n";
            Won = true;
        }
    }
    std::cout << "\n";
    system("pause");
}
