#include <stdbool.h>
#include <stdio.h>

int main(void) {
    long current_number;
    for (;;) {
        // Ask the user for a number
        printf("Enter a number: ");
        scanf("%ld", &current_number);

        // Terminate the program if the user provided a number at most zero.
        if (current_number <= 0) {
            break;
        }

        // Initialize the variable necessary for tracking repeated digits
        long quotient = current_number;
        long current_digit;
        int repeat_counter[10] = {0};
        bool is_digit_repeated = false;

        // Count the digit repetition
        while (quotient != 0) {
            current_digit = quotient % 10;
            quotient = quotient / 10;

            repeat_counter[current_digit]++;

            // Update the digit repetition flag
            if (!is_digit_repeated && repeat_counter[current_digit] > 1) {
                is_digit_repeated = true;
            }
        }

        // Print the output
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
                    printf(" %3d", repeat_counter[i]);
                }
            }
            printf("\n");
        } else {
            printf("No repeated digit\n");
        }
    }

    return 0;
}
