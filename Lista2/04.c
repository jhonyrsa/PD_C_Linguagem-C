#include <stdio.h>
#include <math.h>

void main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero>0){
        printf("O quadrado de %d eh %d.\n", numero, numero*numero);
        printf("A raiz de %d eh %.2f.\n", numero, sqrt(numero));
    }
}
