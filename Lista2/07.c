#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1>num2)
        printf("O numero %d eh maior.\n", num1);
    else if(num2>num1)
        printf("O numero %d eh maior.\n", num2);
    else
        printf("Os numeros sao iguais.\n");

    return 0;
}
