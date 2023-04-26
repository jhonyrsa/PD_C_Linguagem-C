#include <stdio.h>

int main()
{
    float mquadrados, hectares;

    printf("Area (m^2): ");
    scanf("%f", &mquadrados);

    hectares = mquadrados*0.0001;

    printf("Area: %f hec.\n", hectares);

    return 0;
}
