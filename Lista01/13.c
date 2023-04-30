#include <stdio.h>

int main()
{
    float quilometros, milhas;

    printf("d (km) = ");
    scanf("%f", &quilometros);

    milhas = quilometros/1.61;

    printf("d = %.2f mi.\n", milhas);

    return 0;
}
