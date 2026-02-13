#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {
    // Initialize the grid
    char walk[10][10] = {0};
    generate_random_walk(walk);
    print_array(walk);
    return 0;
}

void generate_random_walk(char walk[10][10]) {
    // Seed the random function
    srand(time(NULL));

    // Initialize the first grid
    int current_row_index = rand() % 10;
    int current_column_index = rand() % 10;

    int next_row_index;
    int next_column_index;

    // Initialize the letter to A;
    char letter = 65;

    bool is_left_available = true;
    bool is_right_available = true;
    bool is_up_available = true;
    bool is_down_available = true;
    for (int i = 1; i <= 26; i++) {

        is_left_available = (current_column_index != 0) &&
                            walk[current_row_index][current_column_index - 1] == '\0';
        is_right_available = (current_column_index != 9) &&
                             walk[current_row_index][current_column_index + 1] == '\0';

        is_up_available =
            (current_row_index != 0) && walk[current_row_index - 1][current_column_index] == '\0';

        is_down_available =
            (current_row_index != 9) && walk[current_row_index + 1][current_column_index] == '\0';

        if (is_left_available || is_right_available || is_up_available || is_down_available) {
            for (;;) {
                int direction_indicator = rand() % 4 + 1;

                if (direction_indicator == 1 && is_left_available) {
                    current_column_index -= 1;
                    break;
                } else if (direction_indicator == 2 && is_right_available) {
                    current_column_index += 1;
                    break;
                } else if (direction_indicator == 3 && is_up_available) {
                    current_row_index -= 1;
                    break;
                } else if (direction_indicator == 4 && is_down_available) {
                    current_row_index += 1;
                    break;
                }
            }
            walk[current_row_index][current_column_index] = letter;
            letter++;
        } else {
            break;
        }
    }
}
void print_array(char walk[10][10]) {
    // Print the grid
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c  ", !(walk[i][j] >= 'A' && walk[i][j] <= 'Z') ? '*' : walk[i][j]);
        }
        printf("\n\n\n");
    }
}
