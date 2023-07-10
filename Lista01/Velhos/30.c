#include <stdio.h>

int main(void)
{
    float real, dolar, convertido;

    printf("Cotacao em dolar\n\n");
    printf("Digite a cotacao do dolar hoje: ");
    scanf("%f", &dolar);
    printf("Digite o valor em reais para converter: ");
    scanf("%f", &real);

    convertido = real/dolar;

    printf("Seu valor convertido em dolares eh: US$ %.3f.\n", convertido);

    return 0;
}
