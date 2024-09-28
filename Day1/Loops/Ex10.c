#include <stdio.h>

int main() {
    int n; 
    int sum = 0;

    printf("Entrer un nombre entier: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

printf("La somme de nombres %d premiers entiers est: %d\n", n, sum);

return 0;
}