#include <stdio.h>

int main() {
    long long n;
        printf("Entrer un nombre positif [ex:2225]: ");
        scanf("%lld", &n);
    do {
        if(n <= 0){
            printf("Erreur: Veuillez entrer un nombre positif [ex:2225]:");
        }
    }while(n <= 0);

    int comp = 0;

    while(n != 0) {
        n = n / 10;
        comp++;
    }

    printf("Nombre de chiffres = %d", comp);

    return 0;
}