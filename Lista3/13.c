#include <stdio.h>

int main(void)
{
    int numero, i, numeroPar;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    for(i=0; i<=numero; i++){
        numeroPar = 2*i;
        if(numeroPar<=numero)
            printf("%d\n",numeroPar);
    }

    return 0;
}
