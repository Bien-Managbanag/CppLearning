#include <iostream>
#include "dec.h"

using namespace std;
string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
int player = 1;
int position = 0; /*0-9*/

void intro()
{
    cout << "Press [Enter] to begin: ";
    getchar(); /*halts the screen until a button is pressed*/
    cout << "\n";

    cout << "*******************\n";
    cout << "Let's Play Tic Tac Toe\n";
    cout << "*******************\n";

    cout << "Player 1: X \n";
    cout << "Player 2: O \n";

    cout << "     |     |     \n";
    cout << "  1  |  2  |  3  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  4  |  5  |  6  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  7  |  8  |  9  \n";
    cout << "     |     |     \n\n";
}
