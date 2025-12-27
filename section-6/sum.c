#include <stdio.h>

int main(void) {
    int sum = 0;
    int input = 1;
    printf("This program sums a series of integers.\nEnter integers (0 to terminate): ");
    while (input) {
        scanf("%d", &input);
        sum += input;
    }
    printf("The sum is: %d\n", sum);

    return 0;
}