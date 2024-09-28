#include <stdio.h>

int main(){
    int a, b;

    printf("\nEntrer le premier nombre: ");
    scanf("%d", &a);

    printf("\nEntrer le deuxieme: ");
    scanf("%d", &b);

    if(a == b){
        printf("\nLa somme de %d est: %d", a, a*3);
    } else {
        printf("\nLa somme de %d et %d est: %d", a, b, a+b);
    }
    return 0;
}