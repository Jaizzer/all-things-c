#include <stdio.h>

int main(void) {

    // Ask the user for input
    float x = 1;
    printf("x: ");
    scanf("%f", &x);
   
    
    // Initialize the coefficients
    int coefficients[] = {3, 2, -5, -1, 7, -6};

    // Perform Horner's Rule method
    float solution = 0;
    for (int i = 0; i < 6; i++) {
        if (i == 0) {
            solution = coefficients[i];
        } else {
            solution = x * solution + coefficients[i];
        }
    }

    // Display the solution
    printf("P(%.2f) = %0.2f\n", x, solution);

    return 0;
}