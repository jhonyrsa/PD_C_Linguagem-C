#include <stdio.h>

int main(void)
{
    int numero, soma=0, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i=1; i<=numero; i++) soma=soma+i;

    printf("A soma dos %d primeiros numeros eh %d.\n", numero, soma);

    return 0;
}
