#include <stdio.h>

int main(void)
{
    float hectares, mquadrados;

    printf("Area (hec): ");
    scanf("%f", &hectares);

    mquadrados = hectares*10000;

    printf("Area: %f m^2.\n", mquadrados);

    return 0;
}
