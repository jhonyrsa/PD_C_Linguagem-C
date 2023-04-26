#include <stdio.h>

int main(void)
{
    float acres, mquadrados;

    printf("Area (acre): ");
    scanf("%f", &acres);

    mquadrados = acres*4048.58;

    printf("Area: %f m^2.\n", mquadrados);

    return 0;
}
