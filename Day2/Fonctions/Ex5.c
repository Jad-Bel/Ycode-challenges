#include <stdio.h>

int Factorielle(int n) { 
    int fact = 1;
    for(int i = 1; i <= n; i++){
         fact *= i;
    } return fact;
}

int main() {
    int n, fact;

    printf("\nEntrer un nombre pour calculer sa factorielle: ");
    scanf("%d", &n);

    fact = Factorielle(n);

    printf("\nLa factorielle de %d est %d", n, fact);
}