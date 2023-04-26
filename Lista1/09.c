#include <stdio.h>

int main()
{
    float K, C;

    printf("Digite a temperatura em graus Celcius para converter: ");
    scanf("%f", &C);

    K = C +273.15;

    printf("Temperatura em Kelvin: %.2f\n", K);

    return 0;
}
