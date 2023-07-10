#include <stdio.h>
#include <math.h>

double calculaHipotenusa(double catB, double catC);

int main(void){
    double catB, catC;

    printf("Digite o comprimento do cateto B: ");
    scanf("%lf", &catB);
    printf("Digite o comprimento do cateto C: ");
    scanf("%lf", &catC);

    double hipotenusa = calculaHipotenusa(catB, catC);

    printf("Hipotenusa: %.2f u.c.\n", hipotenusa);

    return 0;
}

double calculaHipotenusa(double catB, double catC){
    return sqrt((catB*catB)+(catC*catC));
}
