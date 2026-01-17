#include <stdio.h>

#define SIZE ((int)(sizeof(interest_rates) / sizeof(interest_rates[0])))

int main(void) {
    // Ask the user for the interest rate
    float initial_interest_rate;
    printf("Enter interest rate: ");
    scanf("%f", &initial_interest_rate);

    // Ask the user for the number of years
    int number_of_years;
    printf("Enter number of years: ");
    scanf("%d", &number_of_years);

    // Store all 5 interest rates
    float interest_rates[5];
    for (int i = 0; i < SIZE; i++) {
        interest_rates[i] = initial_interest_rate;
        initial_interest_rate++;
    }

    printf("YEARS");
    for (int i = 0; i < SIZE; i++) {
        printf("\t%3d%%", (int)interest_rates[i]);
    }
    printf("\n");

    // Calculate the investment value
    float investment_values[SIZE];
    for (int i = 0; i < SIZE; i++) {
        investment_values[i] = 100;
    }

    for (int h = 0; h < number_of_years; h++) {
        printf("%3d", h);
        for (int i = 0; i < SIZE; i++) {
            investment_values[i] =
                investment_values[i] + investment_values[i] * interest_rates[i] / 100;
            printf("\t%0.2f", investment_values[i]);
        }
        printf("\n");
    }

    return 0;
}