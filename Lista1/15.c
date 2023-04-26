#include <stdio.h>
#define pi 3.14

int main(void)
{
    float radianos, graus;

    printf("A (rad) = ");
    scanf("%f", &radianos);

    graus = radianos*180/pi;

    printf("A = %.2f grau", graus);

    return 0;
}
