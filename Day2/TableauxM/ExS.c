#include <stdio.h>


int main() {
    int nA, nB;

    printf("Entrer la taille du tableaux 'A': ");
    scanf("%d", &nA);
    

    int arrA[nA];

    printf("Entrer les elements du tableau 'A': ");
    for(int i = 0; i < nA; i++){
        printf("arrA[%d]:", i+1);
        scanf("%d", &arrA[i]);
    }

    printf("Entrer la taille du tableaux 'B': ");
    scanf("%d", &nB);

    int arrB[nB]; 

    printf("Entrer les elements du tableau ' B': ");
    for(int i = 0; i < nB; i++){
        printf("arr[B]: ", i + 1);
        scanf("%d", &arrB[i]);
    }

    int arrC[nA + nB];

    for(int i = 0; i < nA; i++){
        arrC[i] = arrA[i];
    }

    for(int i = 0; i < nB; i++){
        arrC[nA + i] = arrB[i];
    }

    printf("Tableau C : ");
    for(int i = 0; i < nA + nB; i++){
        printf("%d ", arrC[i]);
    } printf("\n");

    int numberToCount;
    printf("Entrer le nombre a compter: ");
    scanf("%d", &numberToCount);

    int count = 0;

    for(int i = 0; i < nA + nB; i++){
        if (arrC[i] == numberToCount){
            count++;
        }
    }
    printf("Le nombre %d appairait %d fois.", numberToCount, count);

    return 0;
}