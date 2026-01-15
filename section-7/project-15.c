#include <stdio.h>

int main(void) {
    for (double input_number = 0; input_number <= 1000; input_number++) {
        // Set factorial to 1 to handle 0!
        double factorial = 1;
        for (double i = 1; i <= input_number; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %f: %f\n", input_number, factorial);
        if (factorial < 0) {
            break;
        }
    }
    return 0;
}