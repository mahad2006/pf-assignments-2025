#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));                     // Seed for random number generation
    int targetNumber = rand() % 98 + 2; // Random number between 2 and 99
    int guess, attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've picked a secret number between 2 and 99. Can you guess it?" << endl;

    while (true)
    {
        cout << "\nYour guess: ";
        cin >> guess;
        attempts++;

        if (guess < 2 || guess > 99)
        {
            cout << "Oops! Stay within the range of 2 to 99." << endl;
            continue;
        }

        if (guess < targetNumber)
        {
            cout << "Too low! Aim higher." << endl;
        }
        else if (guess > targetNumber)
        {
            cout << "Too high! Try a smaller number." << endl;
        }
        else
        {
            cout << "Bravo! You nailed it in " << attempts << " attempts!" << endl;
            break; // Game over, correct guess
        }
    }

    cout << "Thanks for playing! See you next time." << endl;
    return 0;
}
