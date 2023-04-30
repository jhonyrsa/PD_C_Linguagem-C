#include <stdio.h>

int main(void)
{
    //Entrada de numeros
    int numA, numB, i;
    //int numPar, numImpar;
    int somaPar=0,multiplicacaoImpar=1;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &numA);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &numB);

    for(i=numA; i<=numB;  i++){

        if(i%2==0)
            somaPar = somaPar + i;
        else
            multiplicacaoImpar = multiplicacaoImpar*i;
    }

    printf("A soma dos numeros pares eh %d.\n", somaPar);
    printf("A multiplicacao dos numeros impares eh %d.\n", multiplicacaoImpar);

    return 0;
}

