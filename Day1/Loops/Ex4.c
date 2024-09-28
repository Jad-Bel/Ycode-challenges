#include <stdio.h>

int main() {
    int n, i;

    printf("\nEntrer un nombre positif: ");
    scanf("%d", &n);

    if (n <= 0){
        printf("\nNumero invalide. Veillez entrer un nombre positif.");
    return 1;}

    int odd = 1; 
    for(int i = 0; i < n; i++){
        printf("%d ", odd);
        odd += 2;
    }
    
    return 0;
}