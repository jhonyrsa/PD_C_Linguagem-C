#include <stdio.h>

int main()
{
    float C, K;

    printf("Digite sua temperatura em Kelvin: ");
    scanf("%f", &K);

    C = K-273.15;

    printf("Temperatura em graus Celcius: %.2f\n", C);

    return 0;
}
