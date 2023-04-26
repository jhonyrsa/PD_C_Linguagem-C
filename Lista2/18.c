#include <stdio.h>

int main(void)
{
    char operacao;

    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf("%c", &operacao);

    if(operacao=='+' ||operacao=='-'||operacao=='*'||operacao=='/'){

        float numero1, numero2, resultado;

        printf("Digite o primeiro numero: ");
        scanf("%f", &numero1);
        printf("Digite o segundo numero: ");
        scanf("%f", &numero2);

        switch(operacao){
            case '+':
                resultado = numero1+numero2;
                break;
            case '-':
                resultado = numero1-numero2;
                break;
            case '*':
                resultado = numero1*numero2;
                break;
            case '/':
                resultado = numero1/numero2;
                break;
        }
        printf("Resultado: %.1f\n", resultado);
    }
    else
        printf("Operacao nao reconhecida.\n");

    return 0;
}
