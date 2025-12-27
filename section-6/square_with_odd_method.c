#include <stdio.h>

int main(void) {
    int number_of_entries;
    printf("This programs create a table of squares with n entries using the odd method.\nEnter "
           "the number of table entries:");
    scanf("%d", &number_of_entries);

    for (int square = 1, i = 0, odd = 1; i <= number_of_entries; odd += 2, i++) {
        printf("%d\t%10d\n", i, i * i);
        square += odd;
    }

    return 0;
}