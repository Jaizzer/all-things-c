#include <math.h>
#include <stdio.h>

int main(void) {
    // Prompt the user for the 5 digit number
    int input_number;
    printf("Enter a 5-digit number: ");
    scanf("%d", &input_number);

    int octal_representation = 0;
    int number_to_be_added_to_the_octal_representation;

    for (int i = 0; i < 5; i++) {
        octal_representation += (input_number % 8) * pow(10, i);
        input_number /= 8;
    }

    printf("Octal: %05d\n", octal_representation);

    return 0;
}