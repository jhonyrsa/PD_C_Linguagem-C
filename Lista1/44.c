#include <stdio.h>

int main (void)
{
    float alturaDegrau, alturaTotal;
    int quantidade;

    printf("Digite a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    printf("Digite a altura total a ser alcancada: ");
    scanf("%f", &alturaTotal);

    quantidade = alturaTotal/alturaDegrau;

    printf("O usuario devera subir %d degraus.\n", quantidade);

    return 0;
}
