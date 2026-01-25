#include <stdio.h>

int main(void) {
    char message[100];
    char current_character;
    printf("Enter message to be encrypted: ");

    for (int i = 0; i < 100; i++) {
        scanf("%c", &current_character);
        if (current_character == '\n') {
            break;
        } else {
            message[i] = current_character;
        }
    }

    printf("\n");
    return 0;
}