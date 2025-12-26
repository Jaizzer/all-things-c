#include <stdio.h>

int main(void) {
    int numerical_grade;
    printf("Enter numerical grade: ");
    scanf("%d", &numerical_grade);

    char letter_grade;

    int tens_digit = numerical_grade / 10;
    int ones_digit = numerical_grade % 10;

    switch (tens_digit) {
    case 9:
        printf("Letter Grade: A\n");
        break;

    case 10:
        switch (ones_digit) {
        case 0:
            printf("Letter Grade: A\n");
            break;

        default:
            printf("Invalid Grade\n");
            break;
        }
        break;

    case 8:
        printf("Letter Grade: B\n");
        break;

    case 7:
        printf("Letter Grade: C\n");
        break;

    case 6:
        printf("Letter Grade: D\n");
        break;

    case 0:
    case 5:
        printf("Letter Grade: F\n");
        break;

    default:
        printf("Invalid Grade\n");
        break;
    }

    return 0;
}