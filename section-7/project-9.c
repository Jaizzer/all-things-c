#include <stdio.h>
#include <ctype.h> 

int main(void) {
    // Ask the user for the input
    int input_hour;
    int input_minute;
    char suffix;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &input_hour, &input_minute, &suffix);

    // Capitalize the suffix
    suffix = toupper(suffix);

    // Add 12 hours if the suffix contains P
    if (suffix == 'P') {
        input_hour += 12;
    }
    printf("Equivalent 24-hour time: %d:%02d\n", input_hour, input_minute);
}