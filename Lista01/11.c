#include <stdio.h>

int main()
{
    float kmh, ms;

    printf("v (m/s) = ");
    scanf("%f", &ms);

    kmh = ms*3.6;

    printf("v = %.2f km/h\n", kmh);

    return 0;
}
