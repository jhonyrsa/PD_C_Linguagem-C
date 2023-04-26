#include <stdio.h>
#define fatorConversao 2.54
int main()
{
    float polegadas, centimetros;

    printf("C (pol): ");
    scanf("%f", &polegadas);

    centimetros = polegadas*fatorConversao;

    printf("C = %.2f cm\n", centimetros);

    return 0;
}
