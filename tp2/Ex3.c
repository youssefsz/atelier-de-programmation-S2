#include<stdio.h>

int main(){
    char a , b ,*pa , *pb ,v ,*paux;
    printf("saisir a :");
    scanf("%c",&a);
    scanf("%c",&v);
    printf("\nsaisir b :");
    scanf("%c",&b);
    scanf("%c",&v);

    pa = &a;
    pb = &b;
    char aux;
    paux = &aux;
    *paux = *pa;
    *pa = *pb;
    *pb = *paux; 

    printf(" a = %c et b = %c",*pa , *pb);

    return 0;
}