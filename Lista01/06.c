#include <stdio.h>

int main(){
    float tCelcius, tFahrenheit;

    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &tCelcius);

    tFahrenheit = tCelcius*1.8 +32.0;

    printf("Sua conversao para Fahrenheit eh: %.2f F", tFahrenheit);

    return 0;

}
