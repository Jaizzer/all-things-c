#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    bool result;
    int wins = 0;
    int losses = 0;
    char response;

    for (;;) {
        result = play_game();
        if (result) {
            printf("You win.\n");
            wins++;
        } else {
            printf("You lose.\n");
            losses++;
        }

        printf("\nPlay again: ");
        scanf(" %c", &response);
        if (response != 'y' && response != 'Y') {
            printf("Wins: %d\tLosses: %d\n", wins, losses);
            break;
        }
    }

    return 0;
}

int roll_dice(void) {
    // Seed the random function
    srand(time(NULL));
    return ((rand() % 6) + 1) + ((rand() % 6) + 1);
}

bool play_game(void) {
    int sum = roll_dice();
    printf("You rolled: %d\n", sum);

    int point;
    if (sum == 7 || sum == 8) {
        return true;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        return false;
    } else {
        point = sum;
        printf("You point is %d\n", point);
        do {
            sum = roll_dice();
            printf("You rolled: %d\n", sum);

            if (sum == 7) {
                return false;
            }

        } while (sum != point);
    }

    return true;
}