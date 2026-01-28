#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    // Extract the first letter of the first name to act as the initial
    char first_name_initial;
    printf("Enter your first and last name: ");
    scanf("%c", &first_name_initial);

    // Extract the last name
    bool is_first_name_done = false;
    char lastname[20];
    char current_character;
    int i = 0;
    for (;;) {
        scanf("%c", &current_character);
        if (current_character == ' ') {
            is_first_name_done = true;
            continue;
        } else if (current_character == '\n') {
            break;
        }

        if (is_first_name_done) {
            lastname[i] = current_character;
            i++;
        }
    }

    // Print the name of the user
    printf("You Entered the name: ");
    for (int i = 0; i < 20; i++) {
        // Only print the alphabetical characters the user provided
        if (toupper(lastname[i]) >= 'A' && toupper(lastname[i]) <= 'Z')
            printf("%c", lastname[i]);
    }
    printf(", %c.\n", first_name_initial);

    return 0;
}