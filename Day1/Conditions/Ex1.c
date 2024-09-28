#include <stdlib.h>

int main () {
    int n;
    
    printf("\n Entrer un nombre: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Votre nombre est pair");
    } else {
        printf("Votre nombre est impair");
    }
    return 0;
}