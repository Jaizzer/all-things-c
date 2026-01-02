#include <ctype.h>
#include <stdio.h>

int main(void) {
    char current_reading;
    printf("Enter phone number: ");
    scanf("%c", &current_reading);

    do {
        if ((current_reading >= 'A' && current_reading <= 'Z') ||
            (current_reading >= 'a' && current_reading <= 'z')) {
            current_reading = toupper(current_reading);
            if (current_reading >= 'A' && current_reading <= 'C') {
                printf("2");
            } else if (current_reading >= 'D' && current_reading <= 'F') {
                printf("3");
            } else if (current_reading >= 'G' && current_reading <= 'I') {
                printf("4");
            } else if (current_reading >= 'J' && current_reading <= 'L') {
                printf("5");
            } else if (current_reading >= 'M' && current_reading <= 'O') {
                printf("6");
            } else if (current_reading >= 'P' && current_reading <= 'S') {
                printf("7");
            } else if (current_reading >= 'T' && current_reading <= 'V') {
                printf("8");
            } else if (current_reading >= 'W' && current_reading <= 'Y') {
                printf("9");
            }
        } else {
            printf("%c", current_reading);
        }
        current_reading = getchar();
    } while (current_reading != '\n');
    printf("\n");

    return 0;
}