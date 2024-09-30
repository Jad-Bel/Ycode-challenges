#include <stdio.h>
#include <string.h>


int main() {
    char arr[100];
    char a[100], b[100];
    

    printf("Entrer votre premier chaine de caractere: ");
    gets(a);

    printf("\nEntrer la deuxieme chaine de caractere: ");
    gets(b);

    strcat(a, b);

    printf("Concetation de chaine de caractere: %s ", a);

    return 0;
}