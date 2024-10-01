#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[30];
    char num[20];
    char email[50];
}contact;

contact contacts[100];
int totalContacts = 0;

void simpleAjoute(){
            printf("\n--- Ajouter un contact simple ---\n");
            printf("Nom: ");
            scanf("%s", contacts[totalContacts].name);
            printf("Numero de telephone: ");
            scanf("%s", contacts[totalContacts].num);
            printf("Email: ");
            scanf("%s", contacts[totalContacts].email);
            totalContacts++;
            printf("Contact ajoute avec succes !\n");
};
void multipleAjoute() {
    int nombreContacts;
            printf("\n--- Ajouter plusieurs contacts ---\n");
            printf("Combien de contacts voulez-vous ajouter ? ");
            scanf("%d", &nombreContacts);        

            for(int i = 0; i < nombreContacts; i++){
                printf("\n--- Contact %d ---\n", i+1);
                printf("Nom: \n");
                scanf("%s", contacts[totalContacts].name);
                printf("Numero de telephone: \n");
                scanf("%s", contacts[totalContacts].num);
                printf("Email: \n");
                scanf("%s", contacts[totalContacts].email);
                totalContacts++;
                printf("Contact ajoute avec succes !\n");
            } 
}

void ajouterContact(){
    int choixAjoute;
     do{
        printf("\n1. Ajoute smple de contact.");
        printf("\n2. Ajoute multiple de contact.");
        printf("\n3. Retourner au menu principale");
        printf("\nChoisiser un choix: ");
        scanf("%d", &choixAjoute);

        switch(choixAjoute){
            case 1: 
                simpleAjoute();
                break;
            case 2:    
                multipleAjoute();
            case 3: printf("Retour au menu principal.");
                    break;
            default: printf("Choix invalide."); 
                     break;
        }
    }while(choixAjoute != 3);
};

void affichierContactAsc(){
    if (totalContacts == 0) {
        printf("Aucun contact a afficher.\n");
    } else {
            contact kaskh;
            for (int i = 0; i < totalContacts - 1; i++) {
            for (int j = i + 1; j < totalContacts; j++) {
            if (strcmp(contacts[i+1].name, contacts[j].name) > 0) {
                kaskh = contacts[i];
                contacts[i] = contacts[j];
                contacts[j] = kaskh;
        
                }
            }
        }
        printf("\nContacts en ordre decroissant (Z -> A):\n");
        for(int i = 0; i < totalContacts; i++){
            printf("Nom: %s\n", contacts[i].name);
            printf("Telephone: %s\n", contacts[i].num);
            printf("E-mail: %s\n\n", contacts[i].email);
        }
    }
}   

void afficherContactDes() {
    if(totalContacts == 0 ){
        printf("Aucun contact a afficher.\n");
        return;
    }

    for(int i = 0; i < totalContacts - 1; i++){
        for(int j = i + 1; j < totalContacts; j++){
            if(strcmp(contacts[i].name, contacts[j].name) < 0) {
                contact temp = contacts[i];
                contacts[i] = contacts[j];
                contacts[j] = temp;
            }
        }
    }
}

void affichage(){
    int choixAffichage;
   do {
        printf("\n1. Afficher un contact simple");
        printf("\n2. Afficher tous les contacts en ordre ascendant.");
        printf("\n3. Afficher tous les contacts en ordre descendant.");
        printf("\n4. Retourner au menu principal (appuyez sur 3)");
        printf("\nEntrer votre choix: ");
        scanf("%d", &choixAffichage);

        switch (choixAffichage) {
            case 1: char nom[50];
                printf("Entrez le nom du contact à afficher: ");
                scanf("%s", nom); 
                for(int i = 0; i < totalContacts; i++){
                    if(strcmp(contacts[i].name, contacts[i].name) == 0){
                        printf("\nNom: %s\nTelephone: %s\nEmail: %s\n", contacts[i].name, contacts[i].num, contacts[i].email);
                    }
                }
                break;
            case 2: if (totalContacts == 0) {
                    printf("Aucun contact a afficher.\n");
                } else {
                    contact kaskh;
                    for (int i = 0; i < totalContacts - 1; i++) {
                        for (int j = i + 1; j < totalContacts; j++) {
                            if (strcmp(contacts[i+1].name, contacts[j].name) > 0) {
                                kaskh = contacts[i];
                                contacts[i] = contacts[j];
                                contacts[j] = kaskh;
                            }
                        }
                    };
            case 3: afficherContactDes();
                    break;

            case 4: printf("Retour au menu principal.");
                    break;
                    
            default:
                    printf("choix invalide."); 
                    break;
            }
        } 

    } while (choixAffichage != 3);
}

void modificationContact() {
   char name[30];
   int choixModification;
   int i;
   do{
        for(i = 0; i < totalContacts; i++){
            if(strcmp(contacts[i].name, name) == 0){
            printf("Que souhaitez vous modifier ?\n");
            printf("1. Tous les informations du contact.\n");
            printf("2. Pour le menu de modification.\n");
            printf("3. Retour au menu principale.\n");
            scanf("%d", choixModification);
            }
        }
        switch (choixModification)
        {
        case 1:
            printf("Nouveau Nom: ");
            scanf("%s", contacts[totalContacts].name);
            printf("Nouveau Numero de telephone: ");
            scanf("%s", contacts[totalContacts].num);
            printf("Nouveau Email: ");
            scanf("%s", contacts[totalContacts].email);
            totalContacts++;
            printf("Contact modifier avec succes !\n");
            break;

        case 2: menuDeModification();
        
        case 3: printf("Retour au menu principale.\n");
        break;
        default: printf("Choix invalide.\n"); 
            break;
        }
   } while(choixModification != 3)
}

void menuDeModification(){
    char name[50];
    int i;
    int choixModification;
    printf("Entrer le nom du contact que vous chercher: ");
    scanf("%s", &name);

    for(i = 0; i < totalContacts; i++){
        if(strcmp(contacts[i].name, name) == 0){
            printf("Que souhaitez vous modifier ?\n");
            printf("1. Tous les informations du contact.\n");
            printf("2. Numéro de téléphone\n");
            printf("4. Adresse e-mail\n");
            printf("5. Modifier les deux\n");
            printf("6. Retour au menu principale.\n");
            printf("Entrez votre choix: ");
            scanf("%d", &choixModification);
        }
    }
    switch (choixModification) {
        case 1: 
        printf("Entrer le nouveau numero de telephone: ");
        scanf("%s", contacts[i].num);
        printf("Numero de telephone modifie avec succes.\n"); 
        break;
        
        case 2: printf("Entrer la nouvelle adresse e-mail: ");
        scanf("%s", contacts[i].email);
        printf("Adresse e-mail modifie avec succes.\n");
        break;
        
        case 3: printf("Entrer la nouveau numero de telephone: ");
        scanf("%s", contacts[i].num);
        printf("Entrer la nouvelle adresse e-mail: ");
        scanf("%s", contacts[i].email);
        printf("Informations modifiees avec succes.\n");
        break;
        
        case 4: printf("Retour au menu principale.\n");
        break;

        default: printf("Choix invalide.\n");
        break;
    } return;
}

int main(){
     
    return 0;
}