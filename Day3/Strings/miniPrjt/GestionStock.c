#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nom[50];
    int numTel[30];
    char email[50];
}contact;

contact contacts[100];
int totalContacts = 0;

void ajouter {
    printf("Entrer le nom du conctact: ");
    fgets(contacts.nom, sizeof(nom), stdin);    
    printf("Entrer le numero du conctact: ");
    scanf("%s", contacts[totalContacts].numTel);
    
    printf("Entrer le email du conctact: ");
    scanf("%s", contact.email);

    [totalContacts].email;

    totalContacts++;
    printf("Contact ajouter avec succes\n");
}


typedef struct {
    char nom[50];
    int numTel[30];
    char email[50];
}contact;

contact contacts[100];
int totalContacts = 0;

void modifierContact() {
    char nom[100];
    printf("Entrer le nom du conctact que vous cherger: ");
    fgets(nom, sizeof(nom), stdin);

    for(int i = 0; i < totalContacts; i++){
        if(strcmp(contacts[i].nom, nom) == 0) {
            printf("Entrer le nouveau nom du contact: ");
            fgets(nom, sizeoff(nom), stdin);

            printf("Entrer le nouveau numero du contact: ");
            fgets(numero, sizeoff(numero), stdin);

            printf("Entre le nouveau email du contact: ");
            fgets(email, sizeoff(email), stdin);

            printf("Contat modifie avec succes\n");
            return;            
        }
    } else {
        printf("Contact non trouve.\n");
    }
}

void supprimerContact (){
    char nom[100];
    printf("\nEntrer le nom du contact a supprimer: ");
    fgets(nom, sizeof(nom), stdin);

    for(int i = 0; i < totalContacts; i++){
        if(strcmp(contacts[i].nom, nom) == 0){
            for(int j = 0; j < totalContacts - 1; j++){
                contacts[j] = contacts[j + 1];
            } totalContacts--;
            printf("contact supprime avec succes.\n");
            return;
        } else {
            printf("Contact non trouve.\n")
        }
    }
}

void affichierContact() {
    if(totalContacts == 0){
        printf("Aucun contact a affichier.\n");
    } else {
        printf("Liste des contact: \n");
        for(int i = 0; i < totalContacts; i++){
            printf("Nom: %s.\n Telephone: %d.\n E-mail: %s.\n", contact.nom, contact.tele, contact.email);
        }
    }
}

void rechercherContact() {
        char nom[100];
        printf("\nEntrer le nom du contact quevous cherche: ");
        fgets(nom, sizeoff(nom), stdin);

        for(int i = 0; i < totalContacts; i++){
            if(strcmp(contacts[i].nom, nom) == 0){
                printf("Nom: %s.\nTéléphone: %s.\nE-mail: %s.\n", 
                   contacts[i].nom, contacts[i].tele, contacts[i].email);}
        } else {
            printf("Contact non trouve.\n");
        }
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
            case 1: ajouter();break;
            case 2: modifierContact();break;
            case 3: supprimerContact();break;
            case 4: affichierContact();break;
            case 5: rechercherContact();break;
            case 6: printf("Quitter...\n");break;
            default: printf("\nChoix invalid. Entrer un choix de 1 a 5, pour quitter tapper 0."); break;
        }
        
    }while (choix != 0);        

    return 0; }




void modifierContact() {
    char nom[100];
    printf("Entrer le nom du conctact que vous cherger: ");
    fgets(nom, sizeof(nom), stdin);
}