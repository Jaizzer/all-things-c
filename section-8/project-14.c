#include <stdio.h>

int main(void) {
    char characters[100] = {0};
    char terminating_symbol;
    printf("Enter a sentence: ");

    // Store the characters
    char current_character;
    for (int i = 0; i < 100; i++) {
        scanf("%c", &current_character);
        if (current_character == '.' || current_character == '?' || current_character == '!') {
            terminating_symbol = current_character;
            break;
        } else {
            characters[i] = current_character;
        }
    }

    return 0;
}