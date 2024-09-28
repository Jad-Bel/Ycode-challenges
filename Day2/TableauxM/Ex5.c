#include <stdio.h>
#include <limits.h>

int main() {
    int n, min;

    printf("Combien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("\nSaisir le chiffre n'%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    } printf("Le plus petit element est: %d\n", min);
    return 0;
}