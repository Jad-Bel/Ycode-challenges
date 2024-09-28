#include <stdio.h>
#include <math.h>

double transform(double c){
    return c + 273.15;
}

int main() {
    double celsius;

    printf("\nEntrer la temperature en Celsius: ");
    scanf("%lf", &celsius);

    double temperature = transform(celsius);

    printf("\n La temperature de Celsius en kelvin est: %lf", temperature);

