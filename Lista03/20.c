#include <stdio.h>

int main(void)
{
    int numero, contagemGeral=0, contagemPares=0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);

        contagemGeral = contagemGeral + 1;
        if(numero%2==0)
            contagemPares = contagemPares + 1;
    }while(numero!=1000);

    printf("Quantidade de numeros digitados: %d\n", contagemGeral);
    printf("Quantidade de numeros pares digitados: %d\n", contagemPares);

    return 0;
}
