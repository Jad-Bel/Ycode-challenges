#include <stdio.h>

int main() {
    char c;

    printf("Entrer un caractere: ");
    scanf(" %c", &c);

    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        
        if (c >= 'A' && c <= 'Z') {
            printf("le caractere %c est un alphabet majuscule.\n", c);
        } else if (c >= 'a' && c <= 'z') {
            printf("le caractere %c est un alphabet miniscules.\n", c);
        } else {
            printf("Le caractere '%c' n'est pas un alphabet.\n",c);
        }

    } return 0;
}