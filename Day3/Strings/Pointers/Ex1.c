#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[10];
    char* P = name;

printf("Entrer une chaine de caractere: ");
fgets(name, sizeof(name), stdin);

   for(int i = 0; name[i] != '\0'; i++){
    printf("%c\t%p\n", name[i], &name[i]);
   }
    return 0;
}