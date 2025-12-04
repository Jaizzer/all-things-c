#include <stdio.h>

int main(void) {
    // Prompt the user for the amount to pay
    int amount_to_pay;    
    printf("Enter a dollar amount: ");
    scanf("%d", &amount_to_pay);

    // Calculate the minimum number of $20 bill
    printf("$20 bills: %d\n", amount_to_pay / 20);

    int remaining_amount = amount_to_pay % 20;

    // Calculate the minimum number of $10 bill
    printf("$10 bills: %d\n", remaining_amount / 10);
    remaining_amount = remaining_amount % 10;

    // Calculate the minimum number of $5 bill
    printf(" $5 bills: %d\n", remaining_amount / 5);
    remaining_amount = remaining_amount % 5;

    // Calculate the minimum number of $1 bill
    printf(" $1 bills: %d\n", remaining_amount);

    return 0;
}