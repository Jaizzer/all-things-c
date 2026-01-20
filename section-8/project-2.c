#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char current_digit;
    int repeat_counter[10] = {0};
    printf("Enter a number: ");

    for (;;) {
        scanf("%c", &current_digit);
        if (current_digit == '\n') {
            break;
        } else {
            repeat_counter[current_digit - '0']++;
        }
    }

    bool is_digit_repeated = false;
    for (int i = 0; i < 10; i++) {
        if (repeat_counter[i] > 1) {
            is_digit_repeated = true;
            break;
        }
    }

    if (is_digit_repeated) {
        printf("Digit:     ");
        for (int i = 0; i < 10; i++) {
            if (repeat_counter[i] > 1) {
                printf(" %3d", i);
            }
        }
        printf("\n");

        printf("Occurrence:");
        for (int i = 0; i < 10; i++) {
            if (repeat_counter[i] > 1) {
                printf(" %3d", i);
            }
        }
        printf("\n");
    } else {
        printf("No repeated digit\n");
    }

    return 0;
}