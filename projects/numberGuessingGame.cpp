/*A game where you guess a random number between 1 and 10*/
/*This code uses pseudo random numbers*/
#include <iostream>
#include <stdlib.h> /*srand, rand function*/
#include <time.h> /*allows us to work with the current time*/

using namespace std;

int main()
{
    srand(time(NULL));
    int secretNum = rand() % 10 + 1;
    int guessNum;
    int number_of_guesses = 0;
    int limit = 5;
    bool guesslimit = false;

    while(secretNum != guessNum && !guesslimit){
        if(number_of_guesses < limit){
            cout << "Guess the secret number (1-10): ";
            cin >> guessNum;
            number_of_guesses++;
        }
        else{
            guesslimit = true;
        }
    }

    if(guesslimit){
        cout << "Loser\n";
        cout << "The number was " << secretNum;
    }
    else{
        cout << "Winner!";
    }

    return 0;
}