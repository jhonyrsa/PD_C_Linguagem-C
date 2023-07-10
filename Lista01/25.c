#include <stdio.h>

double squareMetersConverter(double area);

int main(void){
    double acre;

    printf("Digite a area em acres: ");
    scanf("%lf", &acre);

    double squareMeters = squareMetersConverter(acre);

    printf("Area: %.2f m^2", squareMeters);

    return 0;
}

double squareMetersConverter(double area){
    return area*4048.58;
}
