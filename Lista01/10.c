#include <stdio.h>

double msSConverter (double speed);

int main(void){
    double kmhSpeed;

    printf("Digite uma velocidade em km/h: ");
    scanf("%lf", &kmhSpeed);

    double msSpeed = msSConverter(kmhSpeed);

    printf("Velocidade: %.2lf m/s\n", msSpeed);

    return 0;
}

double msSConverter(double speed){
    return speed/3.6;
}
