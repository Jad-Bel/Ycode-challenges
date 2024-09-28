#include <stdio.h>

int main() {
    int n;

    printf("Combien d'elements voulez-vous entrer: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Entrer l'elements %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
        printf("Tableau trie en ordre croissant: ");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}