#include <stdio.h>

int main() {
    int n;
    printf("Entrer le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tableau[n];

    for(int i = 0; i < n; i++){
        printf("Entrer l'element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Les elements du tableau sont : \n");

    for(int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    } return 0;
}

