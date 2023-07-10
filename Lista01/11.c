#include <stdio.h>

double kmhSConverter(double speed);

int main(void){
    double msSpeed;

    printf("Digite uma velocidade em m/s: ");
    scanf("%lf", &msSpeed);

    double kmhSpeed = kmhSConverter(msSpeed);

    printf("Velocidade: %.2lf km/h\n", kmhSpeed);

    return 0;
}

double kmhSConverter(double speed){
    return speed*3.6;
}
