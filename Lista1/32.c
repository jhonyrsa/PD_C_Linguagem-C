#include <stdio.h>

int main(void)
{
    int numero, soma;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    soma = ((numero*3)+1)+((numero*2)-1);

    printf("A soma procurada eh %d.\n", soma);

    return 0;
}
