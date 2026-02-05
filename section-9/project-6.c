#include <stdio.h>

float solve_specific_polynomial(float x);

int main(void) {
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("The result is %0.2f.\n", solve_specific_polynomial(x));
    return 0;
}

float solve_specific_polynomial(float x) {
    int solution = 0;
    int multiplier = 1;
    int coefficients[] = {6, 7, -1, -5, 2, 3};
    for (int i = 0; i < 6; i++) {
        solution += coefficients[i] * multiplier;
        multiplier *= x;
    }

    return solution;
}