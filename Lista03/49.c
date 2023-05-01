#include <stdio.h>

int main(void)
{
    float salarioCarlos, salarioJoao, aplicacaoCarlos, aplicacaoJoao;
    int meses=0;

    printf("Digite o salario de Carlos: ");
    scanf("%f", &salarioCarlos);

    salarioJoao = salarioCarlos/3.0;

    printf("O salario de Joao eh R$ %.2f\n", salarioJoao);

    meses++;

    aplicacaoCarlos = salarioCarlos*1.02;
    aplicacaoJoao = salarioJoao*1.05;

    for(;;meses++){

        if(aplicacaoJoao>=aplicacaoCarlos){
            meses++;
            break;
        }
        aplicacaoCarlos = aplicacaoCarlos*1.02;
        aplicacaoJoao = aplicacaoJoao*1.05;
    }
    printf("Demorou %d meses para Joao ultrapassar Carlos.\n", meses);

    return 0;
}
