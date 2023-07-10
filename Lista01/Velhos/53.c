#include <stdio.h>

int main(void)
{
    float comprimento, largura, preco, custo;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o preco do m^2 de tela: ");
    scanf("%f", &preco);

    custo = preco*largura*comprimento;

    printf("O custo para cercar o terreno eh $ %.2f.\n", custo);

    return 0;
}
