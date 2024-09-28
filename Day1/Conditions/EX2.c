#include <stdio.h>
#include <ctype.h>


int main(){

    char letter;

    printf("Saisir un character: ");
    scanf("%c", &letter);

int maj = toupper(letter);

switch (maj) {
    case 'A' :  printf(" %c est une voyelle.\n", maj); break;
    
    case 'E' :  printf(" %c est une voyelle.\n", maj); break;
    
    case 'U' :  printf(" %c est une voyelle.\n", maj); break;
    
    case 'O' :  printf(" %c est une voyelle.\n", maj); break;
    
    case 'I' :  printf(" %c est une voyelle.\n", maj); break;

    case 'Y' :  printf(" %c est une voyelle.\n", maj); break;

    default: printf(" %c n'est pas une voyelle.\n", maj);

} return 0;
}