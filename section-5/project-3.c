#include <stdio.h>

int main(void) {
    float number_of_shares;
    printf("Enter the number of shares: ");
    scanf("%f", &number_of_shares);

    float price_per_share;
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    // Calculate the original_brokers_commission of the original broker;
    float value_of_trade = number_of_shares * price_per_share;
    float original_brokers_commission;
    if (value_of_trade < 2500) {
        original_brokers_commission = 30 + 0.017 * value_of_trade;
    } else if (value_of_trade >= 2500 && value_of_trade < 6250) {
        original_brokers_commission = 56 + 0.0066 * value_of_trade;
    } else if (value_of_trade >= 6250 && value_of_trade < 20000) {
        original_brokers_commission = 76 + 0.0034 * value_of_trade;
    } else if (value_of_trade >= 20000 && value_of_trade < 50000) {
        original_brokers_commission = 100 + 0.0022 * value_of_trade;
    } else if (value_of_trade >= 50000 && value_of_trade < 500000) {
        original_brokers_commission = 155 + 0.0011 * value_of_trade;
    } else {
        original_brokers_commission = 255 + 0.0009 * value_of_trade;
    }
    printf("Original Broker's Commission: $%.2f\n", original_brokers_commission);

    // Calculate the rival broker's commission
    float rival_brokers_commission;
    if (number_of_shares < 2000) {
        rival_brokers_commission = 33 + 0.03 * number_of_shares;
    } else {
        rival_brokers_commission = 33 + 0.02 * number_of_shares;
    }
    printf("Rival Broker's Commission: $%.2f\n", rival_brokers_commission);

    return 0;
}