#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_PHRASES 10
#define MAX_TAILLE 200

int main() {
    char *phrases[NB_PHRASES];
    char buffer[MAX_TAILLE + 1];
    int i;
    char *temp;

    printf("Entrez 10 phrases (max 200 caracteres chacune) :\n");

    for (i = 0; i < NB_PHRASES; i++) {
        printf("Phrase %d : ", i + 1);
        
        fgets(buffer, sizeof(buffer), stdin);
        
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
            len--;
        }

        phrases[i] = (char *)malloc((len + 1) * sizeof(char));
        if (phrases[i] != NULL) {
            strcpy(phrases[i], buffer);
        }
    }

    for (i = 0; i < NB_PHRASES / 2; i++) {
        temp = phrases[i];
        phrases[i] = phrases[NB_PHRASES - 1 - i];
        phrases[NB_PHRASES - 1 - i] = temp;
    }

    printf("\n--- Phrases apres avoir inverse les pointeurs ---\n");
    for (i = 0; i < NB_PHRASES; i++) {
        printf("Phrase %d : %s\n", i + 1, phrases[i]);
    }

    return 0;
} 