#include <stdio.h>

int main(void)
{
    int num1, num2, num3, soma;

    printf("Digite os tres numeros separados por espaco: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1*num1 + num2*num2 + num3*num3;

    printf("Soma dos quadrados: %d.\n", soma);

    return 0;
}
