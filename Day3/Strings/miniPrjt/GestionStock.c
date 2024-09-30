#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nom[50];
    int numTel[30];
    char email[50];
}contact;

void ajouter {
    
}

int main() {

    int choix;

    do {
        printf("\n\t********* Menu Principal ********\n");
        printf("\n1. Ajouter un contact.");
        printf("\n2. Modifier un contact.");
        printf("\n3. Supprimer un contact.");
        printf("\n4. Affichier un contact.");
        printf("\n5. Rechercher un contact.");
        printf("\n0. Quitter.");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ;break;
            case 2: ;break;
            case 3: ;break;
            case 4: ;break;
            case 5: ;break;
            default: ;break;
        }
        
    }while (choix != 0);

    return 0;
} 


