#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int index = rand() % 7;

if (index == 0) {
    printf("Jour de la semaine: Lundi\n");
} else if(index == 1) {
    printf("Jour de la semaine: Mardi\n");
} else if (index == 2) {
    printf("Jour de la semaine: Mercredi\n");
} else if (index == 3) {
    printf("Jour de la semaine: Jeudi\n");
} else if (index == 4) {
    printf("Jour de la semaine: Vendredi\n");
} else if (index == 5) {
    printf("Jour de la semaine: Samedi\n");
} else if (index == 6) {
    printf("Jour de la semaine: Dimanche\n");
} else {
    printf("Nombre non valide");
}

    return 0;
}