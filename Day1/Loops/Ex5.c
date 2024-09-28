#include <stdio.h>

int main() {
    int base, exposant;
    float power = 1;

    printf("\nEntrer la base: ");
    scanf("%d", &base);
    printf("\nEntrer le exponent: ");
    scanf("%d", &exposant);
    int expo = exposant;

    while (expo < 0){
        power = power/base;
        expo++;
    }

    while (expo > 0){
        power = power * base;
        expo--;
    }

    printf("%d ^ %d = %.2f", base, expo, power);

    return 0;
}