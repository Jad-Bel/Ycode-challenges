#include <stdio.h>
#include <math.h>

double transform(double kmh){
    return kmh + 0.27778;
}

int main() {
    double kilometres;

    printf("\nEntrer la vitesse en kmh: ");
    scanf("%lf", &kilometres);

    double conversion = transform(kilometres);

    printf("\n La vitesse en ms est: %lf", conversion);

    return 0;
}