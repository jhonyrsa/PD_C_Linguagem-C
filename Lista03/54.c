#include <stdio.h>

int main(void)
{
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int numeroPrimo = 0;

    while(numeroPrimo==0){
        numeroPrimo = 1;
        for(i=2; i<numero;i++){
            if(numero%i==0)
                numeroPrimo=0;
                break;
        }
        if(numeroPrimo==1)
            printf("O numero eh primo\n");
        else{
            printf("O numero nao eh primo\n");
            break;
        }
    }

    return 0;
}
