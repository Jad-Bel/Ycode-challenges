#include <stdio.h>
#include <stdlib.h>

void sign_nombre(int num) {
    if (num < 0){
        printf("\n Le numero que vous avez saisir est negative.");
    } else if(num > 0){
        printf("\nLe numero que vous avez saisir est positive.");
    } else {
        printf("Numero invalide.");
    }
}

int main() {
    int n;

    printf("Saisir un numero reel: ");
    scanf("%d", &n);

    sign_nombre(n);

return 0;
}