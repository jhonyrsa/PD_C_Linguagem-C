#include <stdio.h>

int main(void)
{
    int somaQuadrado=0, quadradoSoma, soma=0;

    int i;
    for(i=0; i<=10;i++){
        somaQuadrado = somaQuadrado+i*i;
        soma = soma+i;
    }
    quadradoSoma = soma*soma;

    printf("Soma dos quadrados = %d.\n", somaQuadrado);
    printf("Quadrado das somas = %d.\n", quadradoSoma);
    printf("(Soma dos quadrados) - (Quadrado das somas) = %d.\n", quadradoSoma - somaQuadrado);

    return 0;

}
