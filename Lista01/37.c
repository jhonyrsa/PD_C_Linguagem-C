#include <stdio.h>

float calculadoraDisconto(float produto);

int main(void){
    float precoProduto;

    printf("Digite o preco do produto: ");
    scanf("%f", &precoProduto);

    float discontoProduto = calculadoraDisconto(precoProduto);

    printf("O novo preco do produto eh R$%.2f\n", discontoProduto);

    return 0;
}

float calculadoraDisconto(float produto){
    return (1-0.12)*produto;
}
