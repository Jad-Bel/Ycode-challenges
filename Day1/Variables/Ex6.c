#include <stdio.h>

void calculation (double a, double b){
    printf("\n%.2lf + %.2lf: %.2lf ", a,b,a+b);
    printf("\n%.2lf - %.2lf: %.2lf ", a,b,a-b);
    printf("\n%.2lf / %.2lf: %.2lf ", a,b,a/b);
    printf("\n%.2lf * %.2lf: %.2lf ", a,b,a*b);
}

int main() {
    int a, b;
    printf("\nEntrer le premier nombre: ");
    scanf("%lf", &a);

    printf("\nEntrer le deuxieme nombre: ");
    scanf("%lf", &b);

    calculation(a,b);

    return 0;
}