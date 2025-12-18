#include <stdio.h>

int main(void) {
    int first_digit;
    int second_digit;
    int third_digit;
    int fourth_digit;
    int fifth_digit;
    int sixth_digit;
    int seventh_digit;
    int eight_digit;
    int ninth_digit;
    int tenth_digit;
    int eleventh_digit;
    int twelfth_digit;

    long int input;
    printf("Enter the UPC code: ");
    scanf("%ld", &input);

    first_digit = input / 100000000000;
    input %= 100000000000;
    second_digit = input / 10000000000;
    input %= 10000000000;
    third_digit = input / 1000000000;
    input %= 1000000000;
    fourth_digit = input / 100000000;
    input %= 100000000;
    fifth_digit = input / 10000000;
    input %= 10000000;
    sixth_digit = input / 1000000;
    input %= 1000000;
    seventh_digit = input / 100000;
    input %= 100000;
    eight_digit = input / 10000;
    input %= 10000;
    ninth_digit = input / 1000;
    input %= 1000;
    tenth_digit = input / 100;
    input %= 100;
    eleventh_digit = input / 10;
    input %= 10;
    twelfth_digit = input / 1;

    int first_sum =
        first_digit + third_digit + fifth_digit + seventh_digit + ninth_digit + eleventh_digit;
    int second_sum = second_digit + fourth_digit + sixth_digit + eight_digit + tenth_digit;

    int a = first_sum * 3;
    int b = second_sum + a;
    int total = b - 1;
    int remainder = total % 10;
    int final = 9 - remainder;

    printf("Final Check Digit: %d\n", final);

    return 0;
}