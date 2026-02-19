#include<stdio.h>

int main(){
    char a , b ,*pa , *pb ,v ,aux;
    printf("saisir a :");
    scanf("%c",&a);
    scanf("%c",&v);
    printf("\nsaisir b :");
    scanf("%c",&b);
    scanf("%c",&v);

    pa = &a;
    pb = &b;
    aux = *pa;
    *pa = *pb;


    *pb = aux; 

    printf(" a = %c et b = %c",*pa , *pb);

    



    return 0;
}