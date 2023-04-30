#include <stdio.h>
#include <math.h>

int main(void)
{
    int numero, soma=0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero==0)
        printf("Infinito\n");
    else if(numero==1){
        soma = 1;
    }
    else
        for(int i=abs(numero); i>0; i--){
            if(numero%i==0)
                soma = soma+i;
        }
    if(numero!=0)
        printf("Soma (divisores >0): %d\n", soma);
    if(numero<0)
        printf("Caso os divisores < 0 fossem considerados, resultaria numa soma igual a 0.\n");

    return 0;
}
