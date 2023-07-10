#include <stdio.h>

double kilogramsConverter(double mass);

int main(void){
    double pounds;

    printf("Digite a massa em libras: ");
    scanf("%lf", &pounds);

    double kilograms = kilogramsConverter(pounds);

    printf("Massa: %.2lf kg\n", kilograms);

    return 0;
}

double kilogramsConverter(double mass){
    return mass*0.45;
}
