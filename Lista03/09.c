#include <stdio.h>

int main(void)
{
    int numeroImpar, i, iMax;

    printf("Digite um numero: ");
    scanf("%d", &iMax);

    for(i=0; i<=iMax; i++){
        numeroImpar = 2*i+1;
        printf("%d\n", numeroImpar);
    }

    return 0;
}
