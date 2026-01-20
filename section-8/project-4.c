#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
    int n = ARRAY_SIZE;

    int array[n];

    printf("Enter 10 numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("In reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}