#include <stdio.h>

int main(void)
{
    unsigned int numero;

    printf("Digite um numero inteiro: ");
    scanf("%u", &numero);

    if(numero%2==0)
        printf("O numero digitado eh par.\n");
    else
        printf("O numero digitado eh impar.\n");

    return 0;
}
