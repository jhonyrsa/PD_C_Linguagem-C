#include <stdio.h>

double poundsConverter(double mass);

int main(void){
    double kilograms;

    printf("Digite a massa em quilogramas: ");
    scanf("%lf", &kilograms);

    double pounds = poundsConverter(kilograms);

    printf("Massa: %.2f lb\n", pounds);

    return 0;
}

double poundsConverter(double mass){
    return mass/0.45;
}
