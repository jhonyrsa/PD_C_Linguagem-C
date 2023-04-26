#include <stdio.h>
#include <math.h>

int main(void)
{
    int numero;
    float raiz;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero>0){
        raiz = sqrt((numero));
        printf("A raiz do numero eh %.2f.\n", raiz);
    }
    else
        printf("O numero eh invalido, digite um numero positivo.\n");

    return 0;
}
