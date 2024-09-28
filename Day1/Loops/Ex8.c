#include <stdio.h>

int main() {
    int i, n;
    
    int f0 = 0, f1 = 1;

    int next = f0 + f1;

    printf("Entrer le nombre de la suite de Fibonacci: ");
    scanf("%d", &n);

    printf("La suite de Fibonacci est: %d %d", f0, f1);

    for(i = 3; i <= n; i++) {
        printf("%d ", next);
        f0 = f1;
        f1 = next;
        next = f0 + f1;
    } return 0;
}