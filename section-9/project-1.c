#include <stdio.h>

int selection_sort(int numbers[]);

int main(void) {
    int n = 10;
    int integers[n];
    printf("Enter a series of %d integers to be sorted: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &integers[i]);
    }

    return 0;
}

int selection_sort(int numbers[]) { return 0; }