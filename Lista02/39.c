#include <stdio.h>

int main(void)
{
    float salarioAtual, salarioReajustado;
    int tempoServico;

    printf("\tAJUSTADOR DE SALARIOS\n");
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salarioAtual);
    printf("Digite o tempo de servico em anos: ");
    scanf("%d", &tempoServico);

    if(salarioAtual>=0.0 && salarioAtual<=500.0){
        if(tempoServico==0)
            salarioReajustado = salarioAtual*1.25;
        else if(tempoServico>=1 && tempoServico<=3)
            salarioReajustado = salarioAtual*1.25 + 100;
        else if(tempoServico>=4 && tempoServico<=6)
            salarioReajustado = salarioAtual*1.25 + 200;
        else if(tempoServico>=7 && tempoServico<=10)
            salarioReajustado = salarioAtual*1.25 + 300;
        else if(tempoServico>10)
            salarioReajustado = salarioAtual*1.25 + 500;
        else
            printf("Tempo de servico invalido.\n");
    }
    else if(salarioAtual> 500.0 && salarioAtual<=1000.0){
        if(tempoServico==0)
            salarioReajustado = salarioAtual*1.2;
        else if(tempoServico>=1 && tempoServico<=3)
            salarioReajustado = salarioAtual*1.2 + 100;
        else if(tempoServico>=4 && tempoServico<=6)
            salarioReajustado = salarioAtual*1.2 + 200;
        else if(tempoServico>=7 && tempoServico<=10)
            salarioReajustado = salarioAtual*1.2 + 300;
        else if(tempoServico>10)
            salarioReajustado = salarioAtual*1.2 + 500;
        else
            printf("Tempo de servico invalido.\n");
    }
    else if(salarioAtual> 1000.0 && salarioAtual<=1500.0){
        if(tempoServico==0)
            salarioReajustado = salarioAtual*1.15;
        else if(tempoServico>=1 && tempoServico<=3)
            salarioReajustado = salarioAtual*1.15 + 100;
        else if(tempoServico>=4 && tempoServico<=6)
            salarioReajustado = salarioAtual*1.15 + 200;
        else if(tempoServico>=7 && tempoServico<=10)
            salarioReajustado = salarioAtual*1.15 + 300;
        else if(tempoServico>10)
            salarioReajustado = salarioAtual*1.15 + 500;
        else
            printf("Tempo de servico invalido.\n");
    }
    else if(salarioAtual> 1500.0 && salarioAtual<=2000.0){
        if(tempoServico==0)
            salarioReajustado = salarioAtual*1.1;
        else if(tempoServico>=1 && tempoServico<=3)
            salarioReajustado = salarioAtual*1.1 + 100;
        else if(tempoServico>=4 && tempoServico<=6)
            salarioReajustado = salarioAtual*1.1 + 200;
        else if(tempoServico>=7 && tempoServico<=10)
            salarioReajustado = salarioAtual*1.1 + 300;
        else if(tempoServico>10)
            salarioReajustado = salarioAtual*1.1 + 500;
        else
            printf("Tempo de servico invalido.\n");
    }
    else if(salarioAtual>2000.0){
        if(tempoServico==0)
            salarioReajustado = salarioAtual;
        else if(tempoServico>=1 && tempoServico<=3)
            salarioReajustado = salarioAtual + 100;
        else if(tempoServico>=4 && tempoServico<=6)
            salarioReajustado = salarioAtual + 200;
        else if(tempoServico>=7 && tempoServico<=10)
            salarioReajustado = salarioAtual + 300;
        else if(tempoServico>10)
            salarioReajustado = salarioAtual + 500;
        else
            printf("Tempo de servico invalido.\n");
    }
    else
        printf("Salario invalido.\n");

    if(salarioAtual>=0 && salarioAtual<=2000.00)
        printf("Salario foi reajustado para R$ %.2f.\n", salarioReajustado);
    else if (salarioAtual > 2000.0)
        printf("Salario nao foi reajustado, recebendo bonus adequadamente. Novo salario: R$ %.2f.\n", salarioReajustado);

    return 0;
}
