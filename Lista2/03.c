#include <stdio.h>
#include <math.h>

int main(void)
{
    float numero, raiz, quadrado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    if(numero>=0){
        raiz = sqrt(numero);
        printf("A raiz do numero eh %.2f.\n", raiz);
    }
    else{
        quadrado = numero*numero;
        printf("O quadrado do numero eh %.2f.\n", quadrado);
    }

    return 0;
}
