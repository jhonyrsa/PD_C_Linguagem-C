#include <stdio.h>

int main(void)
{
    float precoProduto, precoDesconto, precoParcela, comissaoDesconto, comissaoParcelada;

    printf("Digite o preco do produto: ");
    scanf("%f", &precoProduto);

    precoDesconto = precoProduto*.9;
    precoParcela = precoProduto/3.0;
    comissaoDesconto = precoDesconto*0.05;
    comissaoParcelada = precoProduto*0.05;

    printf("Preco do produto:         $%.2f\n", precoProduto);
    printf("Preco com desconto:       $%.2f\n", precoDesconto);
    printf("Comissao venda a vista:   $%.2f\n", comissaoDesconto);
    printf("Valor da parcela (3x):    $%.2f\n", precoParcela);
    printf("Comissao venda parcelada: $%.2f\n", comissaoParcelada);

    return 0;
}
