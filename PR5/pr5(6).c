#include <stdio.h>

void main() {
  int m[10][10], t[10][10], m, n, i, j;

  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d %d", &m, &n);

  printf("Enter the elements of the matrix: ");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &m[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      t[j][i] = m[i][j];
    }
  }

  printf("The transpose of the matrix is: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", t[i][j]);
    }
    printf("\n");
  }
}