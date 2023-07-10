#include <stdio.h>

double inchesConverter(double length);

int main(void){
    double centimeters;

    printf("Digite um comprimento em centimetros: ");
    scanf("%lf", &centimeters);

    double inches = inchesConverter(centimeters);

    printf("Comprimento: %.2lf in\n", inches);

    return 0;
}

double inchesConverter(double length){
    return length/2.54;
}
