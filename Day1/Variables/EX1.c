#include <stdio.h>

int main() {
    char n[50], p[50], sexe, email[100];
    int age;
    
    printf("Entrer votre nom: ");
    scanf("%s", n);

    printf("Entrer votre prenom: ");
    scanf("%s", p);

    printf("Entrer votre age: ");
    scanf("%d", &age);
    
    printf("Entrer votre adress email: ");
    scanf("%s", email);

    printf("Entrez votre sexe [M] ou [F]: ");
    scanf(" %c", sexe);

    printf("\nNom: %s", n);
    printf("\nPrenom: %s", p);
    printf("\nSexe: %c", sexe);
    printf("\nAdresse Email: %s", email);

return 0;
}