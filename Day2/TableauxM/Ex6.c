#include <stdio.h>

int main() {
    int n, facteur;

    printf("entrer le nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Entrer l'elements %d: ", i+1 );
        scanf("%d", &arr[i]);
    }
    
    printf("Entrer le facteur: ");
    scanf("%d", &facteur);

    for(int i = 0; i < n; i++){
        arr[i] *= facteur;
    }
    printf("Le tableau apres la multiplication: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}