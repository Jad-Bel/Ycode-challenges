#include <stdio.h>


int main() {
   double c;

   printf("\nEntrer la temperature en celsius: ");
   scanf("%lf", &c);

    if(c >= 100){
        printf("\nl'etat de l'eau a cette temperature %.2lf est: Gaz", c);
    } else if(c >= 0){
        printf("\nl'etat de l'eau a cette temperature %.2lf est: Liquide", c);
    } else {
      printf("\nl'etat de l'eau a cette temperature %.2lf est: Solide", c);
    }
    return 0;
}