#include <stdio.h>

int main(void) {
    int hours;
    int minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    printf("Equivalent 12-hour time: ");
    if (hours > 12) {
        printf("%d:%d PM", hours - 12, minutes);
    } else if (hours == 12) {
        printf("12:%d PM", minutes);
    } else {
        printf("%d:%d AM", hours, minutes);
    }
    printf("\n");

    return 0;
}