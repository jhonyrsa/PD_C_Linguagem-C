#include <stdio.h>

int main(void)
{
    float salario=2000.00;
    int ano = 1996, opcao;

    printf("Em %d o funcionario tinha um salario de R$ %.2f.\n", ano, salario);

    salario = salario*1.015;
    ano++;

    printf("Em %d o funcionario tinha um salario de R$ %.2f.\n", ano, salario);

    while(1){
        salario = salario*2;
        ano++;
        printf("Em %d o funcionario tinha um salario de R$ %.2f.\n", ano, salario);
        printf("Deseja continuar (1 - Sim / 2- Nao): ");
        scanf("%d", &opcao);
        if(opcao==2)
            break;
        else if(opcao<1 || opcao>2)
            printf("Opcao desconhecida.\n");
    }
    return 0;
}
