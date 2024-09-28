#include <stdio.h>

int main() {
    int n;
    int odd = 0;

    printf("\nSaisir un numero reel: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        odd += 2;
        printf("%d ", odd);
    }

    return 0;
}