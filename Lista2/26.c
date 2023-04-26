#include <stdio.h>

int main(void)
{
    float distancia, qdeLitros, consumoLitro;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros consumida: ");
    scanf("%f", &qdeLitros);

    consumoLitro = distancia/qdeLitros;

    if(consumoLitro<8)
        printf("Venda o carro!\n");
    else if(consumoLitro >= 8 && consumoLitro<= 14)
        printf("Economico!\n");
    else
        printf("Super economico!\n");

    return 0;
}
