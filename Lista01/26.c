#include <stdio.h>

double hectareConverter(double area);

int main(void){
    double squareMeters;

    printf("Digite uma area em metros quadrados: ");
    scanf("%lf", &squareMeters);

    double hectares = hectareConverter(squareMeters);

    printf("Area: %.4lf ha\n", hectares);

    return 0;
}

double hectareConverter(double area){
    return area*0.0001;
}
