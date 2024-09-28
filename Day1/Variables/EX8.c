#include <stdio.h>
#include <math.h>

double moyenne_geo(double a, double b, double c){
    return  pow (a * b * c, 1/3);
}

int main(){
    double a,b,c, resultat;

    printf("Entrer trois nombres: \n");
    scnaf("%lf %lf %lf", &a, &b, &c);

    resultat = moyenne_geo(a,b,c);

    printf("La moyenne geometrique de %lf, %lf et %lf est: %lf\n", a,b,c, resultat);

return 0;
}