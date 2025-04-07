#include <stdio.h>

#define SIZE 3

void printBoard(char board[SIZE][SIZE]) {
    int cellNumber = 1;
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ')
                printf(" %d ", cellNumber);
            else
                printf(" %c ", board[i][j]);
            if (j < SIZE - 1)
                printf("|");
            cellNumber++;
        }
        printf("\n");
        if (i < SIZE - 1)
            printf("---+---+---\n");
    }
    printf("\n");
}

void initializeBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            board[i][j] = ' ';
}

void move(int *row, int *col) {
    int choice;
    printf("Enter your move (1-9): ");
    scanf("%d", &choice);

    while (choice < 1 || choice > 9) {
        printf("Invalid input! Try again (1-9): ");
        scanf("%d", &choice);
    }

    *row = (choice - 1) / 3;
    *col = (choice - 1) % 3;
}

int checkWin(char board[SIZE][SIZE], char player) {
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return 1;
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return 1;

    return 0;
}

int checkDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

int updateBoard(char board[SIZE][SIZE], int row, int col, char player) {
    if (board[row][col] == ' ') {
        board[row][col] = player;
        return 1;
    }
    return 0;
}

int main() {
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    int row, col;

    initializeBoard(board);

    while (1) {
        printBoard(board);
        printf("Player %c's turn.\n", currentPlayer);

        move(&row, &col);

        if (!updateBoard(board, row, col, currentPlayer)) {
            printf("That spot is already taken! Try again.\n");
            continue;
        }

        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (checkDraw(board)) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
