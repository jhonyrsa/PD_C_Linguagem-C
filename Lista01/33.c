#include <stdio.h>

float areaQuadrado(float lado);

int main(void){
    float lado;

    printf("Digite a medida do lado do quadrado: ");
    scanf("%f", &lado);

    float area = areaQuadrado(lado);

    printf("Area: %.2f u.a", area);

    return 0;
}

float areaQuadrado(float lado){
    return lado*lado;
}
