#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator
    int secretNumber = rand() % 100 + 1;       // generates the randon number between 1 to 100
    int guess, attempts, maxattempts;
    cout << "Welcome to number guessing game !!" << endl;
    cout << "Enter difficulty level :" << endl;
    cout << "1 . Easy (10 attempts)" << endl;
    cout << "2 . Medium (5 attempts)" << endl;
    cout << "3 . Hard (3 attempts)" << endl;
    cout << "Enter the level you want to play:";
    int level;
    cin >> level;
    switch (level)
    {
    case 1:
        maxattempts = 10;
        break;
    case 2:
        maxattempts = 5;
        break;
    case 3:
        maxattempts = 3;
        break;
    default:
        cout << "Invalid choice , defaulting to easy.";
        maxattempts = 10;
    }
    for (attempts = 1; attempts <= maxattempts; attempts++)
    {
        cout << "Attempts " << attempts << " of " << maxattempts;
        cout << " Enter the guess ( 1 to 100): ";
        cin >> guess;
        if (guess == secretNumber)
        {
            cout << "Congratulation , You guess the number in " << attempts << " attempts." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "The guessed number is smaller , Please select bigger one." << endl;
        }
        else
        {
            cout << " The guessed number is bigger , please select smaller one  " << endl;
        }
    }
    if (guess != secretNumber)
    {
        cout << "You have used all your attempts " << endl
             << "The number was :" << secretNumber << endl;
    }
    return 0;
}