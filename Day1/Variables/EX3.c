#include <stdio.h>
#include <math.h>

double transform(double km){
    return km * 1093.61;
}

int main() {
    double kilometres;

    printf("\nEntrer la distance en kilometres: ");
    scanf("%lf", &kilometres);

    double distance = transform(kilometres);

    printf("\n La distance de kilometres en yards est: %lf", distance);

    return 0;
}