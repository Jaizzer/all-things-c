#include <stdio.h>

#define ARRAY_SIZE 5;

int main(void) {
    int n = ARRAY_SIZE;

    // Fill in the table
    int table[n][n];
    for (int i = 0; i < n; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &table[i][j]);
        }
    }

    // Calculate the row totals
    printf("Row totals:");
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += table[i][j];
        }
        printf(" %d", sum);
    }
    printf("\n");

    // Calculate the column totals
    printf("Column totals:");
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += table[j][i];
        }
        printf(" %d", sum);
    }
    printf("\n");

    return 0;
}