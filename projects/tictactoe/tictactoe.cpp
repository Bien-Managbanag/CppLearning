#include <iostream>
using namespace std;

// Function to print the Tic-Tac-Toe board
void printBoard(char board[3][3]) {
    cout << "Current Board:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "--|---|--" << endl;
    }
}

// Function to check if there's a winner or a draw
char checkWin(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0]; // Row
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i]; // Column
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];
    
    // Check for draw or continue playing
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return ' '; // Continue playing
        }
    }
    return 'D'; // It's a draw
}

// Function to play the game
void playGame(int& player1Score, int& player2Score) {
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    char currentPlayer = 'X';
    char winner = ' ';
    
    while (winner == ' ') {
        printBoard(board);
        int move;
        cout << "Player " << currentPlayer << ", enter the number of the cell you want to mark: ";
        cin >> move;
        
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        
        if (move < 1 || move > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }
        
        board[row][col] = currentPlayer;  // Current player makes the move
        
        // Check for a winner
        winner = checkWin(board);
        
        // Switch player
        if (winner == ' ') {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
    
    // Game over
    printBoard(board);
    if (winner == 'D') {
        cout << "It's a draw!" << endl;
    } else {
        cout << "Player " << winner << " wins!" << endl;
        // Update the score
        if (winner == 'X') {
            player1Score++;
        } else if (winner == 'O') {
            player2Score++;
        }
    }
}

// Main function
int main() {
    int player1Score = 0;  // Player 1 score counter (Player X)
    int player2Score = 0;  // Player 2 score counter (Player O)
    char playAgain;

    cout << "Welcome to Tic-Tac-Toe!" << endl;
    
    do {
        playGame(player1Score, player2Score);

        // Display the scores
        cout << "\nScores:\n";
        cout << "Player X (Player 1): " << player1Score << endl;
        cout << "Player O (Player 2): " << player2Score << endl;

        // Ask if players want to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nFinal Scores:\n";
    cout << "Player X (Player 1): " << player1Score << endl;
    cout << "Player O (Player 2): " << player2Score << endl;
    
    cout << "Thanks for playing!" << endl;
    
    return 0;
}
