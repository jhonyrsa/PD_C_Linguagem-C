#include <stdio.h>
#define PI 3.14159265

double degreesConverter(double radians);

int main(void){
    double radians;

    printf("Digite um angulo em radianos: ");
    scanf("%lf", &radians);

    double degrees = degreesConverter(radians);

    printf("Angulo: %.2f graus\n", degrees);

    return 0;
}

double degreesConverter(double radians){
    return (radians*180)/PI;
}
