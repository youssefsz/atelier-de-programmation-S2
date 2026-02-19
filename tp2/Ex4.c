#include<stdio.h>

int saisir_a() {
    int a;
    do {
        printf("\nsaisir a :");
        scanf("%d", &a);
    } while (a >= 0);
    return a;
}

float saisir_b() {
    float b;
    do {
        printf("\nsaisir b :");
        scanf("%f", &b);
    } while (b <= 100);
    return b;
}

char saisir_c() {
    char c;
    do {
        printf("\nsaisir c :");
        scanf(" %c", &c);
    } while (c < 'A' || c > 'Z');
    return c;
}

int main(){
    int a, *pa, *pb;
    float b;
    char c, v; 
    
    a = saisir_a();
    b = saisir_b();
    c = saisir_c();

    return 0;
}
