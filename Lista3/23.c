#include <stdio.h>

int main(void)
{
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Divisores de %d: ", numero);
    for(i=numero; i>0; i--){
        if(i==1)
            printf(" %d\n", i);
        else if(numero%i==0)
            printf(" %d", i);
    }

    return 0;
}

