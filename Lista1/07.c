#include <stdio.h>

float main(){

    float tCelcius, tFahrenheit;

    printf("Digite sua temperatura em graus Fahrenheit: ");
    scanf("%f", &tFahrenheit);

    tCelcius = 5.0*(tFahrenheit-32.0)/9.0;

    printf("A temperatura convertida em graus Celcius: %.1f\n", tCelcius);

    return 0.0;
}
