#include <stdio.h>
#include <math.h>

double caldistance(double x1, double y1, double z1, double x2, double y2, double z2){
    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
return distance;
}

int main(){
    double x1,x2,y1,y2,z1,z2, resultat;

    printf("Entrer les coordonnes du premier point (x1, y1, z1): \n");
    scanf("%lf %lf %lf", &x1,&y1,&z1);

    printf("Entrer les cordonnes du deuxieme point (x2, y2, z2)");
    scanf("%lf %lf %lf", &x2,&y2,&z2);

    resultat = caldistance(x1,x2,y1,y2,z1,z2);

    printf("La distance entre les deux points est : %lf\n", resultat);

    return 0; 
}