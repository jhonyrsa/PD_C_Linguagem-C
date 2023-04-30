#include <stdio.h>

int main(void)
{
    int n, i, soma=0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
        soma = soma + i;

    printf("A 1a Serie = %d.\n", soma);

    soma = 0;

    for(i=0; i<n; i++){
        if(i%2==0)
            soma = soma - i;
        else
            soma = soma + i;
    }

    printf("A 2a Serie = %d.\n", soma);

    soma = 0;

    for(i=0; i<n ; i++){
        if(i%2!=0)
            soma = soma +i;
    }

    printf("A 3a Serie = %d.\n", soma);

    return 0;
}
