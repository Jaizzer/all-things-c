#include <ctype.h>
#include <stdio.h>

int main(void) {
    char current_reading;
    printf("Enter a word: ");
    scanf("%c", &current_reading);

    int word_value = 0;
    do {
        if ((current_reading >= 'A' && current_reading <= 'Z') ||
            (current_reading >= 'a' && current_reading <= 'z')) {
            current_reading = toupper(current_reading);
            if (current_reading == 'A' || current_reading == 'E' || current_reading == 'I' ||
                current_reading == 'L' || current_reading == 'N' || current_reading == 'O' ||
                current_reading == 'R' || current_reading == 'S' || current_reading == 'T' ||
                current_reading == 'U') {
                word_value += 1;
            } else if (current_reading == 'D' || current_reading == 'G') {
                word_value += 2;
            } else if (current_reading == 'B' || current_reading == 'C' || current_reading == 'M' ||
                       current_reading == 'P') {
                word_value += 3;
            } else if (current_reading == 'F' || current_reading == 'H' || current_reading == 'V' ||
                       current_reading == 'W' || current_reading == 'Y') {
                word_value += 4;
            } else if (current_reading == 'K') {
                word_value += 5;
            } else if (current_reading == 'J' || current_reading == 'X') {
                word_value += 8;
            } else if (current_reading == 'Q' || current_reading == 'Z') {
                word_value += 10;
            }
        }
        current_reading = getchar();
    } while (current_reading != '\n');
    printf("Scrabble Value: %d\n", word_value);

    return 0;
}