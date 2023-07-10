#include <stdio.h>

double acreConverter(double area);

int main(void){
    double squareMeters;

    printf("Digite a area em metros quadrados: ");
    scanf("%lf", &squareMeters);

    double acre = acreConverter(squareMeters);

    printf("Area = %.4lf acres", acre);

    return 0;
}

double acreConverter(double area){
    return area*0.000247;
}
