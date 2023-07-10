#include <stdio.h>

double celciusConverter(double temperature);

int main(void){

    double tFahrenheit;

    printf("Digite a temperatura Fahrenheit: ");
    scanf("%lf", &tFahrenheit);

    double tCelcius = celciusConverter(tFahrenheit);

    printf("Temperatura em Celcius: %.2f C\n", tCelcius);

    return 0;
}

double celciusConverter(double temperature){
    return 5.0*((temperature - 32.0)/9.0);
}
