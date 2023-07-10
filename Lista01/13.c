#include <stdio.h>

double milesConverter(double distance);

int main(void){
    double kilometers;

    printf("Digite uma distancia em quilometros: ");
    scanf("%lf", &kilometers);

    double miles = milesConverter(kilometers);

    printf("Distancia: %.2f mi\n", miles);

    return 0;
}

double milesConverter(double distance){
    return distance/1.61;
}
