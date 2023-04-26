#include <stdio.h>

int main(void)
{
    float mcub, litros;

    printf("Volume (L): ");
    scanf("%f", &litros);

    mcub = litros/1000.0;

    printf("Volume: %f m^3.\n", mcub);

    return 0;
}
