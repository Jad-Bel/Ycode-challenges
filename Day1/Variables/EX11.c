#include <stdio.h>
#include <math.h>

double SurfaceDeRectangle(double longeur, double largeur){
    return largeur * longeur;
}

int main() {
    double longeur, largeur;

    printf("\nSaisir la longeur du rectangle: ");
    scanf("%lf", &longeur);

    printf("\nSaisir largeur du rectangle: ");
    scanf("%lf", &largeur);

    double surface = SurfaceDeRectangle(longeur, largeur);

    printf("\n La surface du rectangle est: %lf", surface);

    return 0;
}