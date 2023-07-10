#include <stdio.h>

int main(void)
{
    float conversorMS, conversorKMH;

    printf("Digite sua velocidade em km/h: ");
    scanf("%f", &conversorKMH);

    conversorMS = conversorKMH/3.6;

    printf("v = %.2f m/s.\n", conversorMS);

    return 0;
}
