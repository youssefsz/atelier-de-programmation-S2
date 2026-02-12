#include <stdio.h>
    typedef  struct client{
        char code[40];
        char nom[50];
        float solde;
        char catg[40];


    }client;

   typedef struct rep {
        
        char nom[50];
        char adress[100];
        float solde;
        char catg[40];
        char code_client[40];

    }rep;
int main()
{


    client list_clients[20];
    rep list_rep[100];
    int n;
    int m;
    char v;

    do {
        printf("saisir the nombre de client: ");
        scanf("%d",&n);
    }while (n>5);
    printf("\n");

    do {
        printf("saisir the nombre de rep: ");
        scanf("%d",&m);
    }while (m>20);


    for (int i; i<n ; i++){

        printf("saisir cleint %d : \n",i);
        printf("siasir le code: ");
        scanf("%s",list_clients[i].code);
        scanf("%c",&v);
        printf("----\n");
        printf("siasir le nom: ");
        scanf("%s",list_clients[i].nom);
         scanf("%c",&v);
        printf("----\n");
        printf("siasir le solde: ");
        scanf("%f",&list_clients[i].solde);
        printf("----\n");
        printf("siasir le catg: ");
        scanf("%s",list_clients[i].catg);
        printf("----\n");

    }


    for (int i; i<m ; i++){

        printf("saisir rep %d : \n",i);
        printf("siasir le nom: ");
        scanf("%s",list_rep[i].nom);
         scanf("%c",&v);
        printf("----\n");
        printf("siasir le address: ");
        scanf("%s",list_rep[i].adress);
        scanf("%c",&v);
        printf("----\n");
        printf("siasir le catg: ");
        scanf("%s",list_rep[i].catg);
        scanf("%c",&v);
        printf("----\n");
        printf("siasir le code_client: ");
        scanf("%s",list_rep[i].code_client);
        scanf("%c",&v);
        printf("----\n");

    }


    printf("\n$$$$$$$$$$$$$$");
    char code[50];

    printf("saisir un client code donnar: "); 
    scanf("%s",code);
    for(int i ; i<m ;i++){
        if(list_rep[i].code_client== code){
            printf("nom: %s", list_rep[i].nom );
            printf("\n----\n");
            printf("adress: %s", list_rep[i].adress );
            printf("\n----\n");
        }
    };


    
    



    return 0;

}