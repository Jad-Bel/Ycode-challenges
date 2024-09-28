#include <stdio.h>

int main() {
    int n;
    int sum = 0;

     do{
        printf("\nEntrer un nombre positif: ");
        scanf("%d", &n);
       if (n <= 0){
        puts("\nNumero invalide. Veillez entrer un nombre positif.");
       }
    }while(n <= 0);

for(int i = 1; i <= n; i++){
    sum += i;
}
printf("\nLa somme des %d premiers nombres naturels est: %d", n, sum);
return 0;
}