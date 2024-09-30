#include <stdio.h>

void Fibfunc(int n) {

    if(n < 1) {
        printf("Invalid number.");
        return; }

    int Fib1 = 0;
    int Fib2 = 1;

    for(int i = 1; i <= n; i++) {
            printf("%d\n", Fib1);
            int currentNum = Fib1 + Fib2;
            Fib1 = Fib2;
            Fib2 = currentNum;
    } 
}

int main() {
    int n;

    printf("Entrer un entier: ");
    scanf("%d", &n);
    Fibfunc(n);

    return 0;
}   