#include <stdio.h>

void saisir_taille(int *n) {
  do {
    printf("\nsaisir n :");
    scanf("%d", n);
  } while (*n <= 0 || *n >= 100);
}

void remplir_tableau(float *T, int n, char nom) {
  float *p;
  for (p = T; p < T + n; p++) {
    printf("\nsaisir un entier %c :", nom);
    scanf("%f", p);
  }
}

void calculer_somme(float *U, float *V, float *T, int n) {
  float *pu = U, *pv = V, *pt = T;
  for(pt = T; pt < T + n; pt++, pu++, pv++) {
    *pt = *pu + *pv;
  }
}

void afficher_tableau(float *T, int n) {
  float *p;
  for (p = T; p < T + n; p++) {
    printf("\n %f", *p);
  }
}

int main() {
  int n;
  float U[100], V[100], T[100];

  saisir_taille(&n);

  remplir_tableau(U, n, 'U');
  printf("\n---------------\n");
  remplir_tableau(V, n, 'V');

  calculer_somme(U, V, T, n);

  afficher_tableau(T, n);

  return 0;
}
