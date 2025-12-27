#include <stdio.h>

int main(void) {
    int number_of_digits = 0;
    int residuals;
    int integer;
    printf("Enter a non-negative integer: ");
    scanf("%d", &residuals);
    do {
        residuals /= 10;
        number_of_digits++;
    } while (residuals != 0);
    printf("THe number has %d digit(s).\n", number_of_digits);

    return 0;
}