#include <stdio.h>

int main(void) {
    // Prompt the user for the date
    int day;
    int numerical_month;
    int year;
    printf("Enter the date: ");
    scanf("%d/%d/%d", &numerical_month, &day, &year);

    // Choose the corresponding month name
    char *month;
    switch (numerical_month) {
    case 1:
        month = "January";
        break;
    case 2:
        month = "February";
        break;
    case 3:
        month = "March";
        break;
    case 4:
        month = "April";
        break;
    case 5:
        month = "May";
        break;
    case 6:
        month = "June";
        break;
    case 7:
        month = "July";
        break;
    case 8:
        month = "August";
        break;
    case 9:
        month = "September";
        break;
    case 10:
        month = "October";
        break;
    case 11:
        month = "November";
        break;
    case 12:
        month = "December";
        break;
    default:
        break;
    }

    // Choose the corresponding ordinal suffix
    char *suffix;
    switch (day) {
    case 1:
        suffix = "st";
        break;
    case 2:
        suffix = "nd";
        break;
    case 3:
        suffix = "rd";
        break;
    default:
        suffix = "th";
        break;
    }

    // Print the output
    printf("Dated this %d%s day of %s, %d.\n", day, suffix, month, year);

    return 0;
}