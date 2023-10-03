#include <stdio.h>

void main() {
  int m[10][10], i, j, sum = 0;
  int m, n;

  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d %d", &m, &n);

  printf("Enter the elements of the matrix: ");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &m[i][j]);
    }
  }

 
  for (i = 0; i < m; i++) {
    sum += m[i][i];
  }

  printf("The sum of the diagonal elements is: %d\n", sum);
}