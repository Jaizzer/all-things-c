#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void) {
    int n;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd "
           "number between 1 and 99.\nEnter size of magic square: ");
    scanf("%d", &n);

    // Create the magic square
    int magic_square[n][n];
    create_magic_square(n, magic_square);

    // Print the magic square
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, int magic_square[n][n]) {
    int current_col;
    int current_row;
    int new_col;
    int new_row;

    // Initialize the square to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    for (int i = 1; i <= n * n; i++) {
        // Get the index
        if (i == 1) {
            current_row = 0;
            current_col = n / 2;
        } else {
            for (;;) {
                new_row = current_row == 0 ? n - 1 : current_row - 1;
                new_col = (current_col + 1) % n;

                if (magic_square[new_row][new_col] == 0) {
                    current_col = new_col;
                    current_row = new_row;
                    break;
                } else {
                    current_row = (current_row + 1) % n;
                }
            }
        }
        magic_square[current_row][current_col] = i;
    }

    return;
}

void print_magic_square(int n, int magic_square[n][n]) {
    // Print the magic square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", magic_square[i][j]);
        }
        printf("\n");
    }
    return;
}
