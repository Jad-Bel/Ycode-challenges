#include <stdio.h>


// int main() {
//     int nombre;

//     printf("Saisir un nombre de 2 chiffres: ");
//     scanf("%d", &nombre);

//     if(nombre < 1000 || nombre > 9999) {
//         printf("Entrer un nombre de 4 chiffres");
//         return 1;
//     }

//     int premier = nombre / 1000;
//     int deuxieme = (nombre / 100) % 10;
//     int troisieme = (nombre / 10) % 10;
//     int quatrieme = nombre % 10;

//     printf("L'inverse de cette nombre est: %d%d%d%d", quatrieme, troisieme, deuxieme, premier);
    
//     return 0;
// }

int main() {
    int nombre;
    int nombreInverse;

    printf("Saisir un nombre de 4 chiffres: ");
    scanf("%d", &nombre);

    if(nombre < 1000 || nombre > 9999) {
        printf("Entrer un nombre de 4 chiffres");
        return 1;
    }


    nombreInverse = (nombre % 10) * 1000 + 
                    (nombre / 10 % 10) * 100 + 
                    (nombre / 100 % 10) * 10 + 
                    (nombre / 1000);

    // int premier = nombre / 1000;
    // int deuxieme = (nombre / 100) % 10;
    // int troisieme = (nombre / 10) % 10;
    // int quatrieme = nombre % 10;

    printf("L'inverse de cette nombre est: %d", nombreInverse);
    
    return 0;
}