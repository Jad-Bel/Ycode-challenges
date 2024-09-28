#include <stdio.h>

int main() {
    int n;
    int reste;

    printf("ENtrer un nombre entier de 4 chiffres [ex: 1234]: ");
    scanf("%d", &n);

printf("L'ordre inverse est: "); 
    
    while(n != 0){
        
        reste = n % 10;

        printf("%d", reste);

        n = n / 10;

    } printf("\n");

    return 0;
    
}