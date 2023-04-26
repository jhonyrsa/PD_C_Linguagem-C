#include <stdio.h>

int main(void)
{
    int idade, tempoServico;

    printf("Aposentador\n");
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico: ");
    scanf("%d", &tempoServico);

    if(idade>=65)
        printf("Pode se aposentar\n");
    else if(tempoServico>=30)
        printf("Pode se aposentar\n");
    else if(idade>=60 && tempoServico>=25)
        printf("Pode se aposentar\n");
    else
        printf("Não pode se aposentar\n");

    return 0;
}
