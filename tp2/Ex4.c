#include<stdio.h>

int main(){
    int a  ,*pa , *pb ,aux;
    float b;
    char c ,v ; 
    
    do {
    printf("\nsaisir a :");
    scanf("%d",&a);
    }while (a>=0);

     do {
    printf("\nsaisir b :");
    scanf("%f",&b);
    }while (b<=100);

    do {

    printf("\nsaisir c :");
    scanf("%c",&c);
    }while (c<'A' && c >'Z');

    printf(" a = %c et b = %c",*pa , *pb);

    



    return 0;
}