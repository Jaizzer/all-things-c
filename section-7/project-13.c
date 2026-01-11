#include <stdio.h>

int main(void) {
    printf("Enter a sentence: ");
    char current_character;
    float word_count = 0;
    float total_letters = 0;
    float current_word_length = 0;
    do {
        current_character = getchar();
        if (current_character != ' ') {
            current_word_length++;
        } else {
            // Count the words
            word_count++;

            // Count the total letters
            total_letters += current_word_length;

            // Reset the word length
            current_word_length = 0;
        }
    } while (current_character != '\n');

    // Calculate the average
    float average = total_letters / word_count;
    printf("Average word length: %0.2f\n", average);
    return 0;
}