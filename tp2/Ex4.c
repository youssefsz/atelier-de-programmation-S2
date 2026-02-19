#include<stdio.h>

void saisir_a(int *p) {
    do {
        printf("\nsaisir a :");
        scanf("%d", p);
    } while (*p >= 0);
}

void saisir_b(float *p) {
    do {
        printf("\nsaisir b :");
        scanf("%f", p);
    } while (*p <= 100);
}

void saisir_c(char *p) {
    do {
        printf("\nsaisir c :");
        scanf(" %c", p);
    } while (*p < 'A' || *p > 'Z');
}

int main(){
    int a;
    float b;
    char c;

    int *pa;
    float *pb;
    char *pc;

    pa = &a;
    pb = &b;
    pc = &c;
    
    saisir_a(pa);
    saisir_b(pb);
    saisir_c(pc);

    return 0;
}
