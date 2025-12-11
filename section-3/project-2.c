#include <stdio.h>

int main(void) {
    int item_number;
    float unit_price;
    int day;
    int month;
    int year;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%d\t$%10.3f\t%d/%d/%d\n", item_number, unit_price, month, day, year);

    return 0;
}