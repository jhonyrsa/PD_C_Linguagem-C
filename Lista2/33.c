#include <stdio.h>

int main(void)
{
    float precoAntigo, precoNovo;

    printf("REPRECIFICADOR\n");
    printf("Digite o preco do produto (R$): ");
    scanf("%f", &precoAntigo);

    if(precoAntigo>=0.0 && precoAntigo<50.0)
        precoNovo = precoAntigo*1.05;
    else if(precoAntigo>=50.0 && precoAntigo<100.0)
        precoNovo = precoAntigo*1.10;
    else if(precoAntigo>=100.0)
        precoNovo = precoAntigo*1.15;
    else
        printf("Preco digitado eh incorreto, verifique e reinicie a aplicacao.\n");

    if(precoAntigo>=0.0)
        printf("Preco novo do produto: R$ %.2f.\n", precoNovo);
}
