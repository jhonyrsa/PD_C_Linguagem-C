#include <stdio.h>
#include <math.h>

int main(void)
{
    float distancia, x, y;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);

    distancia = sqrt(x*x + y*y);

    printf("As coordenadas distam %.2f ud da origem (0,0)\n", distancia);

    return 0;
}
