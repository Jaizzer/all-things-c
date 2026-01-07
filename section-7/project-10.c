#include <ctype.h>
#include <stdio.h>

int main(void) {
    char current_character;
    printf("Enter a sentence: ");
    current_character = toupper(getchar());

    int vowel_count = 0;
    do {
        if (current_character == 'A' || current_character == 'E' || current_character == 'I' ||
            current_character == 'O' || current_character == 'U') {
            vowel_count++;
        }
        current_character = toupper(getchar());
    } while (current_character != '\n');
    printf("Your sentence contains %d vowels.\n", vowel_count);
    
    return 0;
}