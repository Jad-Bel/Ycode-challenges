#include <stdio.h>

void MaxEntreDeux(int a, int b) {
    if (a > b) {
        printf("\nLe maximum est: %d", a);
    } else if (a < b) {
        printf("\nLe maximum est: %d", b);
    } else {
        printf("\nLes deux nombres sont egaux.");
    }
}

int main() {
    int x, y;

    printf("Entrer la valeur du premier nombre: ");
    scanf("%d", &x);

    printf("\nEntrer la valeur du deuxieme nombre: ");
    scanf("%d", &y);

    MaxEntreDeux(x, y);

    return 0;
}
