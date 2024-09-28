#include <stdio.h>
 
int main() {
    int nombre;
    int i;

    printf("ENtrer un nombre pour affichier sa table de multiplication: ");
    scanf("%d", &nombre);

    printf("Table de multiplication de %d: \n", nombre);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", nombre, i, nombre * i);

    }
    return 0;
}