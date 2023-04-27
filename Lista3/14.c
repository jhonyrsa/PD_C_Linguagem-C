#include <stdio.h>

int main(void)
{
    int numero, numeroPar, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i=numero; i>=0; i--){
        numeroPar = 2*i;
        if(numeroPar<=numero)
            printf("%d\n",numeroPar);
    }

    return 0;
}
