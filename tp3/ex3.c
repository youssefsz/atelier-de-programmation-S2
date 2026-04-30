#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_MOTS 10
#define MAX_LONGUEUR 50

int main() {
    char *MOT[NB_MOTS];
    char buffer[MAX_LONGUEUR + 1];
    int i, j;
    size_t longueur_totale = 0;
    char *PHRASE = NULL;

    printf("Entrez 10 mots (max 50 caracteres chacun) :\n");

    for (i = 0; i < NB_MOTS; i++) {
        printf("Mot %d : ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
            len--;
        }

        MOT[i] = (char *)malloc((len + 1) * sizeof(char));
        if (MOT[i] != NULL) {
            strcpy(MOT[i], buffer);
            longueur_totale += len;
        }
    }

    PHRASE = (char *)malloc((longueur_totale + NB_MOTS) * sizeof(char));
    if (PHRASE == NULL) {
        printf("Erreur d'allocation memoire pour la PHRASE.\n");
        return 1;
    }
    PHRASE[0] = '\0';

    for (i = 0; i < NB_MOTS - 1; i++) {
        for (j = 0; j < NB_MOTS - i - 1; j++) {
            if (strcmp(MOT[j], MOT[j+1]) > 0) {
                char *temp = MOT[j];
                MOT[j] = MOT[j+1];
                MOT[j+1] = temp;
            }
        }
    }

    for (i = 0; i < NB_MOTS; i++) {
        strcat(PHRASE, MOT[i]);
        
        if (i < NB_MOTS - 1) {
            strcat(PHRASE, " ");
        }
        
        free(MOT[i]);
        MOT[i] = NULL;
    }

    printf("\n>>> Phrase construite : %s\n", PHRASE);

    free(PHRASE);

    return 0;
}
