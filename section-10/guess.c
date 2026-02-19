#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number(void);

int main(void) {
    int number;
    int number_of_guesses;
    char response;
    int guess;
    int guess_count = 0;
    while (true) {
        number = generate_random_number();
        while (true) {
            printf("Enter guess: ");
            scanf("%d", &guess);
            guess_count++;
            if (guess > number) {
                printf("Too high; try again.\n");
            } else if (guess < number) {
                printf("Too low; try again.\n");
            } else {
                printf("You won in %d guesses!\n", guess_count);
                break;
            }
        }

        // Ask the user if they want to play again.
        printf("\nPlay again? (Y/N) ");
        scanf(" %c", &response);
        if (response != 'y' && response != 'Y') {
            break;
        }
    }
    return 0;
}
int generate_random_number(void) {
    // Seed the random function
    srand(time(NULL));
    return ((rand() % 100) + 1);
}
