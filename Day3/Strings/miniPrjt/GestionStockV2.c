#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct {
    char name[30];
    char num[20];
    char email[50];
} contact;

contact contacts[100];
int totalContacts = 0;

void simpleAjoute() {
    printf("\n--- Ajouter un contact simple ---\n");
    printf("Nom: ");
    scanf("%s", contacts[totalContacts].name);
    printf("Numero de telephone: ");
    scanf("%s", contacts[totalContacts].num);
    printf("Email: ");
    scanf("%s", contacts[totalContacts].email);
    totalContacts++;
    printf("Contact ajoute avec succes !\n");
}

void multipleAjoute() {
    int nombreContacts;
    printf("\n--- Ajouter plusieurs contacts ---\n");
    printf("Combien de contacts voulez-vous ajouter ? ");
    scanf("%d", &nombreContacts);

    for (int i = 0; i < nombreContacts; i++) {
        printf("\n--- Contact %d ---\n", i + 1);
        printf("Nom: ");
        scanf("%s", contacts[totalContacts].name);
        printf("Numero de telephone: ");
        scanf("%s", contacts[totalContacts].num);
        printf("Email: ");
        scanf("%s", contacts[totalContacts].email);
        totalContacts++;
        printf("Contact ajoute avec succes !\n");
    }
}

void ajouterContact() {
    int choixAjoute;
    do {
        printf("\n1. Ajouter un contact simple.");
        printf("\n2. Ajouter plusieurs contacts.");
        printf("\n3. Retourner au menu principal.");
        printf("\nChoisir un choix: ");
        scanf("%d", &choixAjoute);

        switch (choixAjoute) {
            case 1:
                simpleAjoute();
                break;
            case 2:
                multipleAjoute();
                break;
            case 3:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choixAjoute != 3);
}

void afficherContactsAsc() {
    if (totalContacts == 0) {
        printf("Aucun contact a afficher.\n");
        return;
    }

    contact temp;
    for (int i = 0; i < totalContacts - 1; i++) {
        for (int j = i + 1; j < totalContacts; j++) {
            if (strcmp(contacts[i].name, contacts[j].name) > 0) {
                temp = contacts[i];
                contacts[i] = contacts[j];
                contacts[j] = temp;
            }
        }
    }

    printf("\nContacts en ordre ascendant (A -> Z):\n");
    for (int i = 0; i < totalContacts; i++) {
        printf("Nom: %s\n", contacts[i].name);
        printf("Telephone: %s\n", contacts[i].num);
        printf("E-mail: %s\n\n", contacts[i].email);
    }
}

void afficherContactsDes() {
    if (totalContacts == 0) {
        printf("Aucun contact a afficher.\n");
        return;
    }

    contact temp;
    for (int i = 0; i < totalContacts - 1; i++) {
        for (int j = i + 1; j < totalContacts; j++) {
            if (strcmp(contacts[i].name, contacts[j].name) < 0) {
                temp = contacts[i];
                contacts[i] = contacts[j];
                contacts[j] = temp;
            }
        }
    }

    printf("\nContacts en ordre descendant (Z -> A):\n");
    for (int i = 0; i < totalContacts; i++) {
        printf("Nom: %s\n", contacts[i].name);
        printf("Telephone: %s\n", contacts[i].num);
        printf("E-mail: %s\n\n", contacts[i].email);
    }
}

void affichage() {
    int choixAffichage;
    do {
        printf("\n1. Afficher un contact simple.");
        printf("\n2. Afficher tous les contacts en ordre ascendant.");
        printf("\n3. Afficher tous les contacts en ordre descendant.");
        printf("\n4. Retourner au menu principal.");
        printf("\nEntrer votre choix: ");
        scanf("%d", &choixAffichage);

        switch (choixAffichage) {
            case 1: {
                int found = 0;
                char nom[50];
                printf("Entrez le nom du contact a afficher: ");
                scanf("%s", nom);
                for (int i = 0; i < totalContacts; i++) {
                    if (strcmp(contacts[i].name, nom) == 0) {
                        found = 1;
                        printf("\nNom: %s\nTelephone: %s\nE-mail: %s\n", contacts[i].name, contacts[i].num, contacts[i].email);
                    } 
                    
                } if (!found) {
                    printf("Aucun contact a afficher.\n");
                }
                break;
            }
            case 2:
                afficherContactsAsc();
                break;
            case 3:
                afficherContactsDes();
                break;
            case 4:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choixAffichage != 4);
}

void menuDeModification() {
    char name[50];
    int choixModification;
    printf("Entrez le nom du contact à modifier: ");
    scanf("%s", name);

    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Que souhaitez-vous modifier ?\n");
            printf("1. Numero de telephone.\n");
            printf("2. Adresse e-mail.\n");
            printf("3. Modifier les deux.\n");
            printf("4. Retour au menu principal.\n");
            printf("Entrez votre choix: ");
            scanf("%d", &choixModification);

            switch (choixModification) {
                case 1:
                    printf("Entrez le nouveau numéro de telephone: ");
                    scanf("%s", contacts[i].num);
                    printf("Numero de telephone modifié avec succes.\n");
                    break;
                case 2:
                    printf("Entrez la nouvelle adresse e-mail: ");
                    scanf("%s", contacts[i].email);
                    printf("Adresse e-mail modifiée avec succes.\n");
                    break;
                case 3:
                    printf("Entrez le nouveau numero de telephone: ");
                    scanf("%s", contacts[i].num);
                    printf("Entrez la nouvelle adresse e-mail: ");
                    scanf("%s", contacts[i].email);
                    printf("Informations modifiées avec succes.\n");
                    break;
                case 4:
                    printf("Retour au menu principal.\n");
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }
        }
    }
}

void modificationContact() {
    char name[30];
    int choixModification;
    printf("Entrez le nom du contact a modifier: ");
    scanf("%s", name);

    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Que souhaitez-vous modifier ?\n");
            printf("1. Modifier toutes les informations.\n");
            printf("2. Modifier une seule information.\n");
            printf("3. Retour au menu principal.\n");
            scanf("%d", &choixModification);

            switch (choixModification) {
                case 1:
                    printf("Nouveau nom: ");
                    scanf("%s", contacts[i].name);
                    printf("Nouveau numéro de téléphone: ");
                    scanf("%s", contacts[i].num);
                    printf("Nouveau email: ");
                    scanf("%s", contacts[i].email);
                    printf("Contact modifie avec succes !\n");
                    break;
                case 2:
                    menuDeModification();
                    break;
                case 3:
                    printf("Retour au menu principal.\n");
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }
        }
    }
}

void suppressionContact() {
    char name[30];
    char confirmation[3];
    int contactTrouve = -1;

    printf("Entrer le nom du contact a supprimer: ");
    scanf("%s", name);

    for(int i = 0; i < totalContacts; i++){
        if (strcmp(contacts[i].name, name) == 0){
            contactTrouve = i;
            break;
        }
    }
    if (contactTrouve == -1) {
        printf("Contact non trouve.\n");
        return;
    }

    printf("Voules vous vraiment supprimer ce contact ?\n");
    printf("Nom: %s.\n Telephone: %s.\n E-mail: %s.\n", contacts[contactTrouve].name, contacts[contactTrouve].num, contacts[contactTrouve].email);
    printf("Confirmez (Yes/No): ");
    scanf("%s", confirmation);

    if(strcmp(confirmation, "Yes") == 0 || strcmp(confirmation, "yes") == 0) {
        for(contactTrouve; contactTrouve < totalContacts - 1; contactTrouve++){
            contacts[contactTrouve] = contacts[contactTrouve + 1];
        } totalContacts--;
        printf("Contact supprime avec succes !\n");
        
    } else {
        printf("Suppression annulee.");
    }
}

void rechercherUnContact() {
    int choixRecherche;
    char name[30];
    char num[20];
    int contactTrouve = -1;

    do {
        printf("1. Rechercher par nom\n");
        printf("2. Rechercher par numero de telephone\n");
        printf("3. Retourner au menu principal\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choixRecherche);

        switch(choixRecherche) {
            case 1: 
                printf("Entrer le nom du contact: ");
                scanf("%s", name);  

                contactTrouve = -1;
                for(int i = 0; i < totalContacts; i++) {
                    if (strcmp(contacts[i].name, name) == 0) {
                        contactTrouve = i;
                        break;
                    }
                }
                
                if(contactTrouve != -1) {
                    printf("Contact trouve: \n");
                    printf("Nom: %s\nTelephone: %s\nE-mail: %s\n", contacts[contactTrouve].name, contacts[contactTrouve].num, contacts[contactTrouve].email);
                } else {
                    printf("Contact non trouve avec le nom '%s'.\n", name);
                }
                break;

            case 2: 
                printf("Entrer le numero de telephone du contact: ");
                scanf("%s", num);  

                contactTrouve = -1;
                for(int i = 0; i < totalContacts; i++) {
                    if (strcmp(contacts[i].num, num) == 0) {
                        contactTrouve = i;
                        break;
                    }
                }

                if (contactTrouve != -1) {
                    printf("Contact trouve: \n");
                    printf("Nom: %s\nTelephone: %s\nE-mail: %s\n", contacts[contactTrouve].name, contacts[contactTrouve].num, contacts[contactTrouve].email);
                } else {
                    printf("Contact non trouve avec le numero '%s'.\n", num);
                }
                break;

            case 3: 
                printf("Retour au menu principal...\n");
                break;

            default: 
                printf("Choix invalide.\n");
        }
    } while (choixRecherche != 3); 
}


int main() {
    int choix;
    do {
        printf("\n\t********* Menu Principal ********\n");
        printf("1. Ajouter un contact.\n");
        printf("2. Afficher tous les contacts.\n");
        printf("3. Modifier un contact.\n");
        printf("4. Suppression d'un contact.\n");
        printf("0. Quitter.\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterContact();
                break;
            case 2:
                affichage();
                break;
            case 3:
                modificationContact();
                break;
            case 4: 
                suppressionContact(); 
                break;
            
            case 0:
                printf("Quitter...\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 0);

    return 0;
}
