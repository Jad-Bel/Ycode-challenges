#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
void affichageAdresse() {
    char email[MAX];
    char* p = &email;
    printf("ENtrer votre addresse E-mail(Ne depasse pas 50 char): ");
    fgets(email, sizeof(email), stdin);

    for(int i = 0; email[i] != '/0'; i++){
        printf("%c\t%p", email[i], &email[i]);
    }
};

int main() {
    char email[MAX];

    affichageAdresse(email[MAX]);
    return 0;
}
