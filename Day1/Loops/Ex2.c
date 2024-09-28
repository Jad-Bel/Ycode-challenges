#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int factorial = 1;

    do{
        printf("\nEntrer un nombre positive: ");
        scanf("%d", &n);
       if (n <= 0){
        puts("\nNumero invalide. Veillez entrer un nombre positif.");
       }
    }while(n <= 0);

for(int i = 1; i <= n; i++){
    factorial *= i;
}

printf("Factorial de %d = %d\n", n, factorial);
    return 0;
}