#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calcul(double r){
    return pow(r, 3) * PI * 4/3;
}

int main() {
    double rayon;

    printf("\nEntrer le rayon du sphere: ");
    scanf("%lf", &rayon);

    double volume = calcul(rayon);

    printf("\n Le volume du sphere est: %lf", volume);

    return 0;
}