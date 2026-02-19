#include<stdio.h>

int main(){
    int n , U[100] , V[100] , T[100];
    int *pu, *pv , *pt; 
    pu= U;
    pv = V;
    pt = T;

     do {
    printf("\nsaisir n :");
    scanf("%d",&n);
    }while (n<=0 || n>=100);

    for(pu = U ; pu<U+n ; pu++){
        printf("\nsaisir un entier U :");
        scanf("%d",&*pu);

   }
    printf("\n---------------\n");
    for(pv = U ; pv<V+n ; pv++){
        printf("\nsaisir un entier V :");
        scanf("%d",&*pv);
   }
   for(int i = 0 ; i<n ; i++){
        T[i] = U[i] + V[i];

   }
   for (int i = 0; i<n ; i++){
        printf("\n %d", T[i] );

   }

    return 0;
}

