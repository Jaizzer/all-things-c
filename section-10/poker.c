#include <stdio.h>
#define NUMBER_OF_CARDS 5

void read_hand(char hand[][2]);

int main(void) {
    char hand[NUMBER_OF_CARDS][2] = {0};
    read_hand(hand);
    for (int i = 0; i < NUMBER_OF_CARDS; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%c", hand[i][j]);
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}

void read_hand(char hand[][2]) {
    for (int i = 0; i < NUMBER_OF_CARDS; i++) {
        printf("Enter a card: ");
        for (int j = 0; j < 2; j++) {
            scanf(" %c", &hand[i][j]);
        }
    }
}
