#include <stdio.h>

double centimetersConverter(double length);

int main(void){
    double inches;

    printf("Digite o comprimento em polegadas: ");
    scanf("%lf", &inches);

    double centimeters = centimetersConverter(inches);

    printf("Comprimento: %.2f cm\n", centimeters);

    return 0;
}

double centimetersConverter(double length){
    return inches*2.54;
}
