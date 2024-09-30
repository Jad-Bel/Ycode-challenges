#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    int count = 0;

    printf("\nEntrer une chaine de caractere: ");
    fgets(arr, sizeof(arr), stdin);


    for(int i = 0; i < arr[i]  != '\0'; i++){
        count++;
    }
   
    printf("\nVotre chaine de caractere: %s", arr);
    printf("\nLa longeur de votre chaine de caractere: %d", count);
   
    return 0;
}