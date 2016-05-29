#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, j;
  int **mat; // Adresa matrice

  // Citire dimensiuni matrice
  printf("n = ");
  scanf("%d", &n);

  // Alocare memorie ptr matrice
  mat = malloc(n * sizeof(int *));

  for (i = 0; i < n; i++) {
    mat[i] = calloc(n, sizeof(int));
  }

  // Completare matrice
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      mat[i][j] = n * i + j + 1;
    }
  }

  // Afisare matrice
  for (i = 0; i < n; i++) {
    for (j = 0;j < n; j++) {
      printf("%6d", mat[i][j]);
    }

    printf("\n");
  }
free(mat);
  return 0;
}
