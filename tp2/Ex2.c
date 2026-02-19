#include<stdio.h>

int main(){
    int a , b ,*pa , *pb , s, *ps;
    printf("saisir a :");
    scanf("%d",&a);
    printf("\nsaisir b :");
    scanf("%d",&b);

    pa = &a;
    pb = &b; 
    
    s = *pa + *pb;
    ps = &s;

    printf("la somme de a et b = %d",*ps);


    return 0;
}