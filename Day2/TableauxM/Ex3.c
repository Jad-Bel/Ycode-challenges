#include <stdio.h>

int main() {
    int n; 
    float sum = 0;

    printf("Entrer le nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Entrer elements n'%d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("La somme des elemtents: %2.f", sum);
    return 0;
}