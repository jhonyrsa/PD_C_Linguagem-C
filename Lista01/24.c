#include <stdio.h>

int main(void)
{
    float mquadrados, acres;

    printf("Area (m^2): ");
    scanf("%f", &mquadrados);

    acres = mquadrados*0.000247;

    printf("Area: %f acre.\n", acres);

    return 0;
}
