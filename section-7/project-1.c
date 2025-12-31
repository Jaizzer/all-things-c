#include <stdio.h>

int main(void) {
    // As the user for the the number of entries in the table
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // Create the table of squares
    for (long i = 1; i <= n; i++) {
        printf("%ld\t%10ld\n", i, i * i);
    }

    return 0;
}