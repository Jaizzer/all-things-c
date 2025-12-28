#include <stdio.h>

int main(void) {
    int integer_a;
    int integer_b;
    printf("Enter two integers: ");
    scanf("%d %d", &integer_a, &integer_b);

    // Determine which is larger
    int larger, smaller;
    if (integer_a > integer_b) {
        larger = integer_a;
        smaller = integer_b;
    } else {
        larger = integer_b;
        smaller = integer_a;
    }

    // Perform Euclid's Algorithm for GCD
    for (int remainder;;) {
        remainder = larger % smaller;
        if (!remainder) {
            break;
        }
        larger = smaller;
        smaller = remainder;
    }

    printf("Greatest Common Divisor: %d\n", smaller);
    return 0;
}