#include <math.h>
#include <stdio.h>

#define ERROR (double)0.00001

int main(void) {
    // Ask te user for a positive number
    double input_number;
    printf("Enter a positive number: ");
    scanf("%lf", &input_number);

    // Perform Newton's Method
    double current_error;
    double y_prev;
    double y_current = 1;
    do {
        // Update the y-values
        y_prev = y_current;
        y_current = (y_prev + input_number / y_prev) / 2;

        // Calculate the error
        current_error = fabs(y_prev - y_current);
    } while (current_error >= ERROR);

    // Display the square root
    printf("Square root: %f\n", y_current);

    return 0;
}