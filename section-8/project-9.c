#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Seed the random function
    srand(time(NULL));

    // Initialize the grid
    char grid[10][10];

    // Initialize the first grid
    int current_row_index = rand() % 10;
    int current_column_index = rand() % 10;

    int next_row_index;
    int next_column_index;

    // Initialize the letter to A;
    char letter = 'A';

    for (int i = 1; i <= 26; i++) {
        do {
            /*
            Calculate the next grid until it finds an unoccupied grid that is within one index of a
            filled grid
            */
            next_column_index = current_column_index - (rand() % 2) - 1;
            next_row_index = current_column_index - (rand() % 2) - 1;
        } while (grid[next_row_index][next_column_index] != '\0');

        // Mark the new grid
        grid[next_row_index][next_column_index] = letter;

        // Move to the next letter
        letter++;
    }

    // Print the grid
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("\t%c", grid[i][j] == '\0' ? '*' : grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}