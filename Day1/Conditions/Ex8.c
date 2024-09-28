#include <stdio.h>

int main(){
    float moyenne;

    printf("\nEntrer Votre note: ");
    scanf("%f", &moyenne);

    if(moyenne < 10){
        printf("\nMontion: recalé.");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("\nMention: passable.");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("\nMention: assez bien.");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("MOntion: bien");
    } else if (moyenne >= 16) {
        printf("\nMention: tres bien.");
    }

    return 0;
}