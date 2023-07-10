#include <stdio.h>

int main (void)
{
    float mcub, litros;

    printf("Volume (m^3): ");
    scanf("%f", &mcub);

    litros = 1000*mcub;

    printf("Volume: %.2f L.\n",litros);

    return 0;
}
