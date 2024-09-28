#include <stdio.h>

int addition(int a, int b) {

return a +b;
}

int main() {
    int a, b;

printf("\nEntrer le premier nombre: ");
scanf("%d", &a);

printf("\nEntrer le deuxieme nombre: ");
scanf("%d", &b);

int somme = addition(a,b);

printf("\nLe resultat de votre addition est: %d", somme);

    return 0;
}