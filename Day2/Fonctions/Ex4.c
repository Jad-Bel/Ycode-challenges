#include <stdio.h>

void MinEntreDeux(int a, int b) {
    if (a < b) {
        printf("\nLe minimum est: %d", a);
    } else if (a > b) {
        printf("\nLe minimum est: %d", b);
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

    MinEntreDeux(x, y);

    return 0;
}
