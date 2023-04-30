#include <stdio.h>

int main(void)
{
    float pol, cm;

    printf("c (cm) = ");
    scanf("%f", &cm);

    pol = cm/2.54;

    printf("c = %.2f\"", pol);

    return 0;
}
