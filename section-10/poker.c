#include <stdio.h>

int main(void) {
    char card[5][2] = {0};
    for (int i = 0; i < 5; i++) {
        printf("Enter a card: ");
        for (int j = 0; j < 2; j++) {
            scanf(" %c", &card[i][j]);
        }
    }

    return 0;
}
