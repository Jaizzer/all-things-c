#include <stdio.h>
#include <ctype.h>

#define SIZE 100

char substitute(char letter);

int main(void) {
    // Ask the user for the message
    char message_character[SIZE] = {'*'};
    printf("Enter message: ");

    int i = 0;

    // Store the user's message
    char current_character;
    for (;;) {
        scanf("%c", &current_character);

        // Stop the program if the user exceeded the character limit or if the user press the Return
        if (current_character == '\n' || i == 100) {
            break;
        }
        message_character[i] = current_character;
        i++;
    }

    printf("In B1FF-speak: ");
    for (int j = 0; j < i; j++) {
        printf("%c", substitute(message_character[j]));
    }
    printf("!!!!!!!!!!\n");

    return 0;
}

char substitute(char letter) {
    char mapped_letter = toupper(letter);

    switch (mapped_letter) {
    case 'A':
        mapped_letter = '4';
        break;
    case 'B':
        mapped_letter = '8';
        break;
    case 'E':
        mapped_letter = '3';
        break;
    case 'I':
        mapped_letter = '1';
        break;
    case 'O':
        mapped_letter = '0';
        break;
    case 'S':
        mapped_letter = '5';
        break;

    default:
        break;
    }

    return mapped_letter;
}