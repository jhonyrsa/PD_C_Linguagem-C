#include <stdio.h>

double fahrenheitConverter(double temperature);

int main(void)
{
    double tCelcius;

    printf("Digite a temperatura em Celcius: ");
    scanf("%lf", &tCelcius);

    double tFahrenheint = fahrenheitConverter(tCelcius);

    printf("Temperatura %.2f F\n", tFahrenheint);

    return 0;
}

double fahrenheitConverter(double temperature){
    return temperature*(9.0/5.0)+32.0;
}
