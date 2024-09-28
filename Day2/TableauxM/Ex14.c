#include <stdio.h>
#define MAX 100

int main() {
    int n;
    float sum = 0;
    float moyenne;

    printf("Entrer le nombre d'elements: ");
    scanf("%d", &n);

    int T[n]; 

    for (int i = 0; i < n; i++) {
        printf("Entrer l'element %d: ", i + 1);
        scanf("%d", &T[i]); 
        sum += T[i]; 
    }

    moyenne = sum / n;

    printf("La moyenne est: %.2f\n", moyenne);

    return 0;
}
