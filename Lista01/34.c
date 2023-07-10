#include <stdio.h>
#define PI 3.14159265

double calculadoraArea(double raio);

int main(void){
    double raio;

    printf("Digite o comprimento do raio do circulo: ");
    scanf("%lf", &raio);

    double area = calculadoraArea(raio);

    printf("Area: %.2lf u.a.\n", area);

    return 0;
}

double calculadoraArea(double raio){
    return raio*raio*PI;
}
