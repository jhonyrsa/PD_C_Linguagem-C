#include <stdio.h>

int main(void)
{
    float jardas, metros;

    printf("Distancia (yd): ");
    scanf("%f", &jardas);

    metros = 0.9144*jardas;

    printf("Distancia: %.3f m.\n", metros);

    return 0;
}
