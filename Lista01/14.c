#include <stdio.h>
#define PI 3.14159265

double radiansConverter(double degrees);

int main(void){
    double degrees;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &degrees);

    double radians = radiansConverter(degrees);

    printf("Angulo %.2lf rad\n", radians);

    return 0;
}

double radiansConverter(double degrees){
    return (degrees*PI)/180;
}
