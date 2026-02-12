#include <stdio.h>

typedef  struct{
        int nbliv;
        char livre[50];
        char titre[50];
        char autor[50];
        int nbexp;
        int nblivsor;

    }livree;

int main()
{
    livree livre ;

    char v;


    printf("saisir nbliv");
    scanf("%d",&livre.nbliv);
    printf("--- \n");
    printf("saisir nom:");
    scanf("%s",livre.livre);
    scanf("%c",&v);
    printf("---\n ");
    printf("saisir title:");
    scanf("%s",livre.titre);
    scanf("%c",&v);
    printf("--- \n");
    printf("saiir autor:");
    scanf("%s",livre.autor);
    scanf("%c",&v);
    printf("--- \n");
    printf("saisir nb exepme");

    scanf("%d",&livre.nbexp);
    printf("--- \n");
    printf("saisir nb sorti");
    scanf("%d",&livre.nblivsor);
    printf("$$$$$$$$$$$$$ \n");

    
    printf("%d \n",livre.nbliv);
    printf("*****\n");
    printf("%s \n",livre.livre);
    printf("*****\n");
    printf("%s \n",livre.autor);
    printf("*****\n");
    printf("%s \n",livre.titre);
    printf("*****\n");
    
    printf("%d \n",livre.nbexp);
    printf("*****\n");
    printf("%d \n",livre.nblivsor);

    return 0;
}