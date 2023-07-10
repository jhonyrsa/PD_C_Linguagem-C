#include <stdio.h>

int main(void)
{
    int idade, anoAtual, anoNascimento;

    printf("Ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    anoNascimento = anoAtual-idade;

    printf("Voce nasceu no ano de %d.\n", anoNascimento);

    return 0;
}
