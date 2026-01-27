#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool is_first_name_done = false;
    char first_name_initial;
    char lastname[20];
    char current_character;
    printf("Enter your first and last name: ");
    scanf("%c", &first_name_initial);

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

    printf("You Entered the name: ");
    for (int i = 0; i < 20; i++) {
        if (toupper(lastname[i]) >= 'A' && toupper(lastname[i]) <= 'Z')
            printf("%c", lastname[i]);
    }
    printf(", %c.\n", first_name_initial);

    return 0;
}