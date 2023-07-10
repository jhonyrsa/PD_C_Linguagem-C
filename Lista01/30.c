#include <stdio.h>

void cotacaoDolar(float *valor);

int main(void){
    float real;

    printf("Digite um valor em reais: ");
    scanf("%f", &real);

    cotacaoDolar(&real);

    printf("Conversao: %.2f\n", real);

    return 0;
}

void cotacaoDolar(float *valor){
    float conversaoDolar;
    printf("Digite a cotacao do dolar para converter: ");
    scanf("%f", &conversaoDolar);
    *valor = *valor/conversaoDolar;
}
