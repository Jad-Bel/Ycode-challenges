#include <stdio.h>

int main() {
    char c;

    printf("\nSaisir un caractère: ");
    scanf(" %c", &c);

    if(c >= 65 && c <= 90) {
        printf("\nLe caractère %c est une lettre majuscule.", c);
    } else {
        printf("\nLe caractère %c est une lettre miniscule.", c);
    }
return 0;
}