#include <stdio.h>
#include <stdbool.h>

#define SIZE 3 // Size of the Tic-Tac-Toe board

// Function prototypes
void printBoard(char board[SIZE][SIZE]);
bool isValidMove(char board[SIZE][SIZE], int row, int col);
bool checkWin(char board[SIZE][SIZE], char player);
bool isDraw(int turn);

int main()
{
    char board[SIZE][SIZE] = {
        {'0', '1', '2'},
        {'3', '4', '5'},
        {'6', '7', '8'}
    }; // Initialize the board with numbers
    int turn = 0; // Track the number of turns
    char player;  // Current player ('X' or 'O')
    int row, col; // Player's move (row and column)

    // Print the initial board
    printBoard(board);

    while (turn < SIZE * SIZE) // Maximum turns are 9 for a 3x3 board
    {
        player = (turn % 2 == 0) ? 'X' : 'O'; // Alternate between 'X' and 'O'
        printf("Player %c, enter your move (row and column, e.g., 0 1): ", player);
        scanf("%d %d", &row, &col);

        // Validate the move
        if (!isValidMove(board, row, col))
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Make the move
        board[row][col] = player;
        printBoard(board);
        turn++;

        // Check for a win
        if (checkWin(board, player))
        {
            printf("Player %c wins!\n", player);
            break;
        }

        // Check for a draw
        if (isDraw(turn))
        {
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

// Function to print the game board
void printBoard(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1)
                printf("|");
        }
        printf("\n");
        if (i < SIZE - 1)
            printf("---+---+---\n");
    }
}

// Function to check if a move is valid
bool isValidMove(char board[SIZE][SIZE], int row, int col)
{
    return row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] != 'X' && board[row][col] != 'O';
}

// Function to check if a player has won
bool checkWin(char board[SIZE][SIZE], char player)
{
    // Check rows and columns
    for (int i = 0; i < SIZE; i++)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || // Row
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))   // Column
        {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || // Main diagonal
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))   // Anti-diagonal
    {
        return true;
    }

    return false;
}

// Function to check if the game is a draw
bool isDraw(int turn)
{
    return turn == SIZE * SIZE;
}