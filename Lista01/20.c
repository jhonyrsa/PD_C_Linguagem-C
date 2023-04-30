#include <stdio.h>

int main(void)
{
    float quilos, libras;

    printf("Massa (kg): ");
    scanf("%f", &quilos);

    libras = quilos/0.45;

    printf("Massa: %.3f lb.\n", libras);

    return 0;
}
