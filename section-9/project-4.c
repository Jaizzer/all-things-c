
/*
Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
main will call read_word twice, once for each of the two words entered by the user. As it
reads a word, read_word will use the letters in the word to update the counts array, as
described in the original project. (main will declare two arrays, one for each word. These
arrays are used to track how many times each letter occurs in the words.) main will then
call equal_array, passing it the two arrays. equal_array will return true if the ele-
ments in the two arrays are identical (indicating that the words are anagrams) and false
otherwise.
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int get_alphabet_index(char letter);
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
    int alphabet_score_1[26] = {0};
    int alphabet_score_2[26] = {0};

    printf("Enter the first word: ");
    read_word(alphabet_score_1);

    printf("Enter the second word: ");
    read_word(alphabet_score_2);

    bool is_anagram = equal_array(alphabet_score_1, alphabet_score_2);

    printf("The words are ");
    if (!is_anagram) {
        printf("not ");
    }
    printf("anagrams.\n");

    return 0;
}

int get_alphabet_index(char letter) { return (int)toupper(letter) - 65; }
void read_word(int counts[26]) {
    char current_character;
    for (;;) {
        scanf("%c", &current_character);
        if (current_character == '\n') {
            break;
        }
        counts[get_alphabet_index(current_character)]++;
    }
}
bool equal_array(int counts1[26], int counts2[26]) {
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;
}
