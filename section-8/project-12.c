#include <ctype.h>
#include <stdio.h>

int main(void) {
    char current_reading;
    printf("Enter a word: ");
    scanf("%c", &current_reading);

    int alphabet_scores[] = {
        [0] = 1,  [4] = 1,  [8] = 1,  [11] = 1, [13] = 1, [14] = 1, [17] = 1,  [18] = 1, [19] = 1,
        [20] = 1, [3] = 2,  [6] = 2,  [1] = 3,  [2] = 3,  [12] = 3, [15] = 3,  [5] = 4,  [7] = 4,
        [21] = 4, [23] = 4, [24] = 4, [10] = 5, [9] = 8,  [22] = 8, [25] = 10, [16] = 10};

    int word_value = 0;
    int index = 0;
    do {
        if ((current_reading >= 'A' && current_reading <= 'Z') ||
            (current_reading >= 'a' && current_reading <= 'z')) {
            current_reading = toupper(current_reading);
            index = (int)current_reading - 65;
            word_value += alphabet_scores[index];
        }
        current_reading = getchar();
    } while (current_reading != '\n');
    printf("Scrabble Value: %d\n", word_value);

    return 0;
}