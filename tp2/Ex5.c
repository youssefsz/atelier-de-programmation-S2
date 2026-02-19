#include<stdio.h>

int main(){
   int n , A[50] ;

   printf("\nsaisir n : ");
   scanf("%d",&n);
   for (int i = 0; i<n ; i++){
        printf("\nsaisir un entier :");
        scanf("%d",&A[i]);
        A[i] = A[i] * A[i];

   }
   for (int i = 0; i<n ; i++){
        printf("\n %d", A[i] );

   }

   printf("\n---------------");

   int *p; 
   p= A;
   for (p = A ; p<A+n ; p++){
        printf("\nsaisir un entier :");
        scanf("%d",&*p);
        *p = *p * *p;

   }
   for (p = A ; p<A+n ; p++){
        printf("\n %d", *p );

   }

   


    



    return 0;
}