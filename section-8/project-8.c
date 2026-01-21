#include <stdio.h>

#define ARRAY_SIZE 3;

int main(void) {
    int n = ARRAY_SIZE;

    // Fill in the table
    int table[n][n];
    for (int i = 0; i < n; i++) {
        printf("Enter Student %d Quiz Grades: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &table[i][j]);
        }
    }

    // Calculate per-student summary
    printf("Student\tTotal Score\tAverage Score\n");
    for (int i = 0; i < n; i++) {
        int total_score = 0;
        float average_score = 0;
        for (int j = 0; j < n; j++) {
            total_score += table[i][j];
        }
        average_score = total_score / (float)n;
        printf("  %d\t\t%d\t\t%0.2f\n", i + 1, total_score, average_score);
    }
    printf("\n");

    // Calculate the per-quiz summary
    printf("Quiz\t\tHigh Score\t\tLow Score\t\tAverage Score\n");
    for (int i = 0; i < n; i++) {
        int total_score = 0;
        float average_score = 0;
        float high_score = table[0][i];
        float low_score = table[0][i];
        for (int j = 0; j < n; j++) {
            if (high_score < table[j][i]) {
                high_score = table[j][i];
            }

            if (low_score > table[j][i]) {
                high_score = table[j][i];
            }
            total_score += table[j][i];
        }
        average_score = total_score / (float)n;
        printf("  %d\t\t%f\t\t%f\t\t%0.2f\n", i + 1, high_score, low_score, average_score);
    }
    printf("\n");

    return 0;
}