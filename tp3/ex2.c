#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_MOTS 10
#define MAX_LONGUEUR 50

int main() {
    char *MOT[NB_MOTS];
    char buffer[MAX_LONGUEUR + 1];
    int i, j, min_idx;

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
        }
    }

    for (j = 0; j < NB_MOTS; j++) {
        min_idx = -1;
        for (i = 0; i < NB_MOTS; i++) {
            if (MOT[i] != NULL) {
                if (min_idx == -1 || strcmp(MOT[i], MOT[min_idx]) < 0) {
                    min_idx = i;
                }
            }
        }

        if (min_idx != -1) {
            printf(">> Suppression du mot : %s\n", MOT[min_idx]);
            free(MOT[min_idx]);
            MOT[min_idx] = NULL;
        }

        printf("Mots restants : ");
        int first = 1;
        for (i = 0; i < NB_MOTS; i++) {
            if (MOT[i] != NULL) {
                if (!first) {
                    printf(", ");
                }
                printf("%s", MOT[i]);
                first = 0;
            }
        }
        
        if (first == 1) {
            printf("(aucun)");
        }
        printf("\n");

        if (j < NB_MOTS - 1) {
            printf("\nAppuyez sur 'Enter' pour continuer...");
            while (getchar() != '\n');
        }
    }

    printf("\nFin du programme. Tous les mots ont ete effaces.\n");

    return 0;
}
