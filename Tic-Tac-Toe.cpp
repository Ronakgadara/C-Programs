#include <stdio.h>

int main() {
    char b[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char player = 'X';
    int row, col;
    int filled = 0;

    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        // Print board
        printf("\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%c ", b[i][j]);
            }
            printf("\n");
        }

        printf("Player %c, enter row (0-2) and col (0-2): ", player);
        scanf("%d %d", &row, &col);

        // Validate move
        if (row < 0 || row > 2 || col < 0 || col > 2 || b[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Make move
        b[row][col] = player;
        filled++;

        // Check winner (rows/cols)
        int win = 0;
        for (int i = 0; i < 3; i++) {
            if (b[i][0] == player && b[i][1] == player && b[i][2] == player) win = 1;
            if (b[0][i] == player && b[1][i] == player && b[2][i] == player) win = 1;
        }

        // Check diagonals
        if (b[0][0] == player && b[1][1] == player && b[2][2] == player) win = 1;
        if (b[0][2] == player && b[1][1] == player && b[2][0] == player) win = 1;

        if (win) {
            printf("\n");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) printf("%c ", b[i][j]);
                printf("\n");
            }
            printf("Player %c wins!\n", player);
            break;
        }

        if (filled == 9) {
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}