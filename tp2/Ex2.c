#include<stdio.h>

int main(){
    int a , b ,*pa , *pb , s;
    printf("saisir a :");
    scanf("%d",&a);
    printf("\nsaisir b :");
    scanf("%d",&b);

    pa = &a;
    pb = &b; 
    
    s = *pa + *pb;

    printf("la somme de a et b = %d",s);


    return 0;
}