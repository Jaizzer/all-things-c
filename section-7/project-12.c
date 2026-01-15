#include <stdio.h>

int main(void) {

    // Start the process by adding the first term to the result
    float result = 0;
    char operation = '+';

    // Ask the user for the expression
    float operand_a;
    printf("Enter an expression: ");
    scanf("%f", &operand_a);

    for (;;) {
        switch (operation) {
        case '+':
            result += operand_a;
            break;
        case '-':
            result -= operand_a;
            break;
        case '*':
            result *= operand_a;
            break;
        case '/':
            if (operand_a == 0) {
                printf("Error: Division by zero detected.\n");
                return 0;
            }
            result /= operand_a;
            break;
        default:
            break;
        }

        // Get the next operation
        scanf("%c", &operation);

        // Exit if the end of the expression is reached
        if (operation == '\n') {
            break;
        }
        
        // Get the next operand
        scanf("%f", &operand_a);
    }

    printf("Value of expression: %0.2f\n", result);

    return 0;
}