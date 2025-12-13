#include <stdio.h>

int main(void) {
  int numbers[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
        &numbers[0][0],
        &numbers[0][1],
        &numbers[0][2],
        &numbers[0][3],
        &numbers[1][0],
        &numbers[1][1],
        &numbers[1][2],
        &numbers[1][3],
        &numbers[2][0],
        &numbers[2][1],
        &numbers[2][2],
        &numbers[2][3],
        &numbers[3][0],
        &numbers[3][1],
        &numbers[3][2],
        &numbers[3][3]);

  // Print the matrix
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%3d", numbers[i][j]);
    }
    printf("\n");
  }

  int row_sum = 0;
  printf("\nRow sums: ");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      row_sum += numbers[i][j];
    }
    printf("%d ", row_sum);
    row_sum = 0;
  }

  int column_sum = 0;
  printf("\nColumn sums: ");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      column_sum += numbers[j][i];
    }
    printf("%d ", column_sum);
    column_sum = 0;
  }

  printf("\nDiagonal sums: ");

  int left_to_right_diagonal_sum = 0;
  for (int i = 0; i < 4; i++) {
    left_to_right_diagonal_sum += numbers[0][i];
  }
  printf("%d", left_to_right_diagonal_sum);

  int right_to_left_diagonal_sum = 0;
  for (int i = 0; i < 4; i++) {
    right_to_left_diagonal_sum += numbers[3 - i][i];
  }
  printf(" %d\n", right_to_left_diagonal_sum);

  return 0;
}