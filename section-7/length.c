#include <stdio.h>

int main(void) {
    char a;
    int character_count = 0;
    printf("Enter the message: ");
    for (;;) {
        scanf("%c", &a);
        if (a == '\n') {
            break;
        }
        character_count++;
    }
    printf("The message has %d character/s.\n", character_count);

    return 0;
}