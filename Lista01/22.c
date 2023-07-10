#include <stdio.h>

double metersConverter(double length);

int main(void){
    double yards;

    printf("Digite o comprimento em jardas: ");
    scanf("%lf", &yards);

    double meters = metersConverter(yards);

    printf("Comprimento: %.2lf m\n", meters);

    return 0;
}

double metersConverter(double length){
    return length*0.91;
}
