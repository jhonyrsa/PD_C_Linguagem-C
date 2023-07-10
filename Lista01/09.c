#include <stdio.h>

double kelvinConverter(double temperature);

int main(void){
    double tCelcius;

    printf("Digite uma temperatura Celcius: ");
    scanf("%lf",&tCelcius);

    double tKelvin = kelvinConverter(tCelcius);

    printf("Temperatura: %.2lf K\n", tKelvin);
}

double kelvinConverter(double temperature){
    return temperature + 273.15;
}
