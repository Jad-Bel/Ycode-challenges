#include <stdio.h>

float Multiplication(float a, float b) {
    return a*b;
}

int main() {
    float x,y;

    printf("\nEntrer le premiere nombre: ");
    scanf("%f", &x);

    printf("\nEntrer le deuxieme nombre: ");
    scanf("%f", &y);

    float mult = Multiplication(x,y);

    printf("\nLe produit est: %f", mult);
    return 0;
}