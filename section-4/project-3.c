#include <stdio.h>

int main(void) {
    int first_digit;
    int second_digit;
    int third_digit;

    printf("Enter the first digit: ");
    scanf("%d", &first_digit);

    printf("Enter the second digit: ");
    scanf("%d", &second_digit);
    
    printf("Enter the first digit: ");
    scanf("%d", &third_digit);

    printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);

    return 0;
}