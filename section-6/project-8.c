#include <stdio.h>

int main(void) {
    int days_in_month;
    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    int starting_day_of_the_week;
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day_of_the_week);

    int week_counter = 1;
    int day_of_the_week = 1;
    int day_of_the_month = 1;

    while (day_of_the_month <= days_in_month) {
        // Reset the week after saturday
        if (day_of_the_week % 8 == 0) {
            printf("\n");
        } else if (day_of_the_week >= starting_day_of_the_week) {
            printf("%2d\t", day_of_the_month);
            day_of_the_month++;
        } else {
            printf("\t");
        }
        day_of_the_week++;
    }
    printf("\n");

    return 0;
}