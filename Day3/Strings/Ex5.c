#include <stdio.h>
#include <string.h>

void reverse_chaine(char arr[]) {
    int debut = 0;
    char tmp;
    int end = strlen(arr) - 1;

    while(debut < end) {
        tmp = arr[debut];
        arr[debut] = arr[end];
        arr[end] = tmp;
        debut++;
        end--;
    } 
}
int main() {
    char chaine[100];

    printf("Entrer une chaine de character: ");
    fgets(chaine, sizeof(chaine), stdin);

    reverse_chaine(chaine);
    
    printf("Chaine inversee : %s\n", chaine);
    return 0;
}