#include <stdio.h>

float get_tax(float income);

int main(void) {
    // Ask the user for their income
    float income;
    printf("Income: ");
    scanf("%f", &income);
    printf("Tax: $%0.2f\n", get_tax(income));
    return 0;
}

float get_tax(float income) {
    // Calculate the tax from the income
    float tax = 0;
    if (income < 750) {
        tax = income * 0.01;
    } else if (income < 2250) {
        tax = 7.5 + income * 0.02;
    } else if (income < 3750) {
        tax = 37.5 + income * 0.03;
    } else if (income < 5250) {
        tax = 82.5 + income * 0.04;
    } else if (income < 7000) {
        tax = 142.5 + income * 0.05;
    } else {
        tax = 230 + income * 0.06;
    }

    return tax;
}
