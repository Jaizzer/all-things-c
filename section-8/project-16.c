#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int get_alphabet_index(char letter);

int main(void) {
    int alphabet_score[26] = {0};

    printf("Enter the first word: ");
    char current_character_a;
    for (;;) {
        scanf("%c", &current_character_a);
        if (current_character_a == '\n') {
            break;
        }
        alphabet_score[get_alphabet_index(current_character_a)]++;
    }

    printf("Enter the second word: ");
    char current_character_b;
    for (;;) {
        scanf("%c", &current_character_b);
        if (current_character_b == '\n') {
            break;
        }
        alphabet_score[get_alphabet_index(current_character_b)]--;
    }

    bool is_anagram = true;
    for (int i = 0; i < 26; i++) {
        if (alphabet_score[i] != 0) {
            is_anagram = false;
        }
    }

    printf("The words are ");
    if (!is_anagram) {
        printf("not ");
    }
    printf("anagrams.\n");

    return 0;
}

int get_alphabet_index(char letter) { return (int)toupper(letter) - 65; }