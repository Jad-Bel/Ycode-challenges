#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];

    printf("Entrer une chaine de caractere: ");
    fgets(chaine, sizeof(chaine), stdin);

    printf("\nVotre chaine de caractere est: %s", chaine);
    return 0;
}