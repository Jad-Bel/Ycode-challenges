#include <stdio.h>
#include <string.h>

// int main() {
//     char chaine[100];

//     printf("Entrer une chaine de caractere: ");
//     fgets(l, sizeof(chaine), stdin);

//     printf("\nVotre chaine de caractere est: %s", chaine);
//     return 0;
// }

int main() {

    char chaine[10];

    printf("entrer une de caractere: ");
    scanf("%d", &chaine);

    printf("Votre chaine de caractere: %s", chaine);

    return 0;
}