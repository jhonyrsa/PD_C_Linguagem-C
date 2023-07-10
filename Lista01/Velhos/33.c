#include <stdio.h>

int main(void)
{
    float lado, area;

    printf("Medida do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado*lado;

    printf("A area do quadrado eh %.2f\n", area);

    return 0;
}
