#include <stdio.h>

double dkmCoverter(double distance);

int main(void){
    double miles;

    printf("Digite uma distancia em milhas: ");
    scanf("%lf", &miles);

    double kilometers = dkmCoverter(miles);

    printf("Distancia: %.2lf km\n", kilometers);

    return 0;
}

double dkmCoverter(double distance){
    return distance*1.61;
}
