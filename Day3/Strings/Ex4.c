#include <stdio.h>
#include <string.h>

int main() {
    char arr1[100], arr2[100];

    printf("Entrer la premier chaines de caratere: ");
    fgets(arr1, sizeof(arr1), stdin);

    printf("\nEntrer la deuxieme chaines de caractere: ");
    fgets(arr2, sizeof(arr2), stdin);

    if(strcmp(arr1, arr2) == 0) {
        puts("\nLes deux chaines de caractere sont egales.");
    } else {
        puts("\nLes deux chaines ne sont pas egale");
    }

    return 0;
}