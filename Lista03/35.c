#include <stdio.h>

int main(void)
{
    int valorInicial, valorFinal;

    printf("Digite o valor inicial e valor final: ");
    scanf("%d %d", &valorInicial, &valorFinal);

    int i, somaImpar=0;

    for(i=valorInicial;i<=valorFinal;i++){
        if(i%2!=0)
            somaImpar = somaImpar+i;
    }

    printf("Soma dos impares neste intervalo: %d\n", somaImpar);

    return 0;
}
