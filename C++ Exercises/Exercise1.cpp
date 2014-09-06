/*
Exercise 1 (http://en.wikibooks.org/wiki/C++_Programming/Exercises/Iterations#EXERCISE_1):

Write a program that asks the user to type an integer and writes "YOU WIN" if the value is between 56 and 78 (both included). In the other case it writes "YOU LOSE".
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void displayDescription(void)
{
    cout << "This program will require the user to enter a number of type int.\n"
         << "If the user guesses between 56 and 78 the program will print 'You Win'.\n"
         << "Otherwise the program will print out 'You Lose'. \n" << endl;
}

int main(int numArgs, char* pszArgs[])
{
    displayDescription();

    int value;
    cout << "Please enter a non-negative value: " << endl;
    cin >> value;

    if(value >= 56 && value <= 78)
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "You lose!" << endl;
    }
}
