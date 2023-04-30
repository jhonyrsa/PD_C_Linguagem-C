#include <stdio.h>

int main(void)
{
    float milhas, quilometros;

    printf("Digite uma distancia em milhas: ");
    scanf("%f", &milhas);

    quilometros = milhas*1.61;

    printf("d = %.2f km.\n", quilometros);

    return 0;
}
