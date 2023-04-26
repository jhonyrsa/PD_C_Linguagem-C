#include <stdio.h>

int main(void)
{
    float custoConsumidor, custoFabrica;

    printf("\tCALCULADORA DE CUSTO PARA CONSUMIDOR\n");
    printf("Digite valor do custo de fábrica (R$): ");
    scanf("%f", &custoFabrica);

    if(custoFabrica>=0.0 && custoFabrica<=12000.0)
        custoConsumidor = custoFabrica*0.05;
    else if(custoFabrica>12000.0 && custoFabrica<=25000.0)
        custoConsumidor = custoFabrica*0.10 + custoFabrica*0.15;
    else if(custoFabrica>25000.0)
        custoConsumidor = custoFabrica*0.15 + custoFabrica*0.20;
    else
        printf("Custo de Fabrica invalido ou digitado incorretamente.\n");

    if(custoFabrica>=0.0)
        printf("Custo ao consumidor sera R$ %.2f.\n", custoConsumidor);

    return 0;
}
