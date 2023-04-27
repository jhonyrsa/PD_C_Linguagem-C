#include <stdio.h>

int main(void)
{
    int numero, numeroImpar, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i=0; i<=numero; i++){
        numeroImpar = 2*i+1;
        if(numeroImpar<=numero)
            printf("%d\n", numeroImpar);
    }

    return 0;
}
