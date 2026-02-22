#include <stdbool.h>
#include <stdio.h>
#define NUMBER_OF_CARDS 5

void read_hand(char hand[][2]);
bool is_valid(char suit, char rank);

int main(void) {
    char hand[NUMBER_OF_CARDS][2] = {0};
    read_hand(hand);
    return 0;
}

void read_hand(char hand[][2]) {
    for (int i = 0; i < NUMBER_OF_CARDS; i++) {
        while (true) {
            printf("Enter a card: ");
            scanf(" %c%c", &hand[i][0], &hand[i][1]);
            if (is_valid(hand[i][0], hand[i][1])) {
                break;
            } else {
                printf("Invalid Card.\n");
            }
        }
    }
}

bool is_valid(char suit, char rank) {
    if (suit != 'c' && suit != 'd' && suit != 'h' && suit != 's') {
        return false;
    }

    if (rank != '2' && rank != '3' && rank != '4' && rank != '5' && rank != '6' && rank != '7' &&
        rank != '8' && rank != '9' && rank != 't' && rank != 'j' && rank != 'q' && rank != 'k' &&
        rank != 'a') {
        return false;
    }

    return true;
}
