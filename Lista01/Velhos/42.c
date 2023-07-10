#include <stdio.h>

int main(void)
{
    float salarioBase, gratificacao, imposto, salarioLiquido;

    printf("Digite o Salario-base do funcionario: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase*0.05;
    imposto = salarioBase*0.07;

    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("(=)Salario-Base:      $%.2f\n", salarioBase);
    printf("(+)Gratificacao:      $%.2f\n", gratificacao);
    printf("(-)Imposto:           $%.2f\n", imposto);
    printf("(=)Salario liquido:   $%.2f\n", salarioLiquido);

    return 0;
}
