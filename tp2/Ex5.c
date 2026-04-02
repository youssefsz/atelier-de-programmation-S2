#include <stdio.h>

int main() {
  int n, A[50];

  printf("\n-------Tableau indicé--------");

  do {
    printf("\nsaisir la taille du tableau :");
    scanf("%d", &n);
  } while (n <= 0 || n > 50);

  for (int i = 0; i < n; i++) {
    do
    {
      printf("\nsaisir un entier :");
      scanf("%d", &A[i]);
    } while (A[i] <= 0);
    A[i] = A[i] * A[i];
  }

  for (int i = 0; i < n; i++) {
    printf("\n %d", A[i]);
  }

  printf("\n---------------Pointeur----------------");

  int *p;
  p = A;

  for (p = A; p < A + n; p++) {
    do
    {
      printf("\nsaisir un entier :");
      scanf("%d", &*p);
    } while (*p <= 0);
    
    *p = *p * *p;
  }

  for (p = A; p < A + n; p++) {
    printf("\n %d", *p);
  }

  return 0;
}