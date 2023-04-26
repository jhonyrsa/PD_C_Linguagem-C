#include <stdio.h>

int main(void)
{
    float salario, prestacao, porcentagem;

    printf("Digite o salario do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);

    porcentagem = prestacao/salario;

    if(porcentagem>0.2)
        printf("Emprestimo nao concedido.\n");
    else
        printf("Emprestimo concedido.\n");

    return 0;
}
