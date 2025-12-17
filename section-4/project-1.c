#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Extract the hundreds digit
    int hundreds_digit = number / 100;

    // Extract the tens and ones digit
    int last_2_digits = number  % 100;
    int tens_digit = last_2_digits / 10;
    int ones_digit = last_2_digits % 10;

    // Reverse the digit
    int reversed_digit = ones_digit * 100 + tens_digit * 10 + hundreds_digit;

    printf("The reversal is: %d\n", reversed_digit);

    return 0;
}