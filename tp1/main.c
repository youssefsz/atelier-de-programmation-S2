#include <stdio.h>
int main()
{
    int A[5] = {12, 66, 3, 4, 5};
    int *P;
    P=A; 

    printf("%d", *(P+1)) ;
    return 0;
}