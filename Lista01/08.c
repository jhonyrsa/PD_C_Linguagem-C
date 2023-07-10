#include <stdio.h>

double celciusConverter(double temperature);

int main(void)
{
    double tKelvin;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%lf", &tKelvin);

    double tCelcius = celciusConverter(tKelvin);

    printf("Temperatura em Kelvin: %.2lf C\n", tCelcius);

    return 0;
}

double celciusConverter(double temperature){
    return temperature - 273.15;
}
