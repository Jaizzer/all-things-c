#include <stdbool.h>
#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
    bool is_earlier;
} Date;

int main(void) {
    Date first_date;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_date.month, &first_date.day, &first_date.year);

    Date second_date;
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_date.month, &second_date.day, &second_date.year);

    if (first_date.year < second_date.year) {
        first_date.is_earlier = true;
        second_date.is_earlier = false;
    } else if (first_date.year > second_date.year) {
        first_date.is_earlier = false;
        second_date.is_earlier = true;
    } else if (first_date.month < second_date.month) {
        first_date.is_earlier = true;
        second_date.is_earlier = false;
    } else if (first_date.month > second_date.month) {
        first_date.is_earlier = false;
        second_date.is_earlier = true;
    } else if (first_date.day < second_date.day) {
        first_date.is_earlier = true;
        second_date.is_earlier = false;
    } else {
        first_date.is_earlier = false;
        second_date.is_earlier = true;
    }

    Date earlier_date = first_date.is_earlier ? first_date : second_date;
    Date later_date = first_date.is_earlier ? second_date : first_date;

    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", earlier_date.month, earlier_date.day,
           earlier_date.year, later_date.month, later_date.day, later_date.year);

    return 0;
}