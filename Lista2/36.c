#include <stdio.h>

int main(void)
{
    float vendas, comissaoVendas;

    printf("Informe o volume de vendas realizado pelo vendedor (R$): ");
    scanf("%f", &vendas);

    if(vendas>=100000.00)
        comissaoVendas = 700.00+0.16*vendas;
    else if(vendas>=80000.00 && vendas<100000.00)
        comissaoVendas = 650.00+0.14*vendas;
    else if(vendas>=60000.00 && vendas<80000.00)
        comissaoVendas = 600.00+0.14*vendas;
    else if(vendas>=40000.00 && vendas<60000.00)
        comissaoVendas = 550.00+0.14*vendas;
    else if(vendas>=20000.00 && vendas<40000.00)
        comissaoVendas = 500.00+0.14*vendas;
    else if(vendas>=0.00 && vendas<20000.00)
        comissaoVendas = 400.00+0.14*vendas;
    else
        printf("O valor digitado eh invalido.\n");

    if(vendas>=0.00)
        printf("A comissao sera R$ %.2f.\n", comissaoVendas);

    return 0;
}
