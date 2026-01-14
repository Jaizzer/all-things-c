#include <stdio.h>

int main(void) {
    float operand_a;
    float result;
    char operation;

    printf("Enter an expression: ");
    scanf("%f", &result);
    do {
        scanf("%c%f", &operation, &operand_a);

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
                printf("Division by zero detected.\n");
                return 0;
            }
            result /= operand_a;

            break;

        default:
            break;
        }

    } while (operation != '\n');

    printf("Value of expression: %f\n", result);

    return 0;
}