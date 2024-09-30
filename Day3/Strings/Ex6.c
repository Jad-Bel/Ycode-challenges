#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char arr[MAX];
    char c, occurence = 0;
    
    printf("Entrer une chaine caractere: ");
    fgets(arr, sizeof(arr), stdin);

    printf("Entrer un caractere pour chercher leur nombre d'occurence: ");
    scanf("%c", &c);

    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == c) {
            occurence++;
        }
    }

    printf("Le nombre d'occurence de %c est: %s", c, occurence);
    return 0;
}