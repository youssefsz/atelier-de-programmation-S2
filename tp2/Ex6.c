#include<stdio.h>

int saisir_taille() {
    int n;
    do {
        printf("\nsaisir n :");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);
    return n;
}

void remplir_tableau(int *T, int n, char nom) {
    int *p;
    for (p = T; p < T + n; p++) {
        printf("\nsaisir un entier %c :", nom);
        scanf("%d", p);
    }
}

void calculer_somme(int *U, int *V, int *T, int n) {
    int *pu = U, *pv = V, *pt = T;
    while (pt < T + n) {
        *pt = *pu + *pv;
        pu++;
        pv++;
        pt++;
    }
}

void afficher_tableau(int *T, int n) {
    int *p;
    for (p = T; p < T + n; p++) {
        printf("\n %d", *p);
    }
}

int main() {
    int n, U[100], V[100], T[100];
    
    n = saisir_taille();
    
    remplir_tableau(U, n, 'U');
    printf("\n---------------\n");
    remplir_tableau(V, n, 'V');
    
    calculer_somme(U, V, T, n);
    
    afficher_tableau(T, n);

    return 0;
}
