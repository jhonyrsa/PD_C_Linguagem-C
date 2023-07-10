#include <stdio.h>

double squareMetersConverter(double area){
    return area*10000;
}

int main(void){
    double hectares;

    printf("Digite uma area em hectares: ");
    scanf("%lf", &hectares);

    double squareMeters = squareMetersConverter(hectares);

    printf("Area: %.2lf m^2\n", squareMeters);

    return 0;
}
