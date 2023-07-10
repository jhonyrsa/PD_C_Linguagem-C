#include <stdio.h>

double cubicMetersConverter(double volume);

int main(void){
    double liters;

    printf("Digite o volume em litros: ");
    scanf("%lf", &liters);

    double cubicMeters = cubicMetersConverter(liters);

    printf("Volume: %.2f m^3\n", cubicMeters);

    return 0;
}

double cubicMetersConverter(double volume){
    return volume/1000;
}
