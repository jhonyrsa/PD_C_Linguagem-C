#include <stdio.h>

int main (void)
{
    int i, impar;
    float soma = 0.0;

    for(i=1;i<=50; i++){
        impar = 2*i-1;
        soma = soma + ((float)impar/i);
    }

    printf("S = %.3f\n", soma);

    return 0;
}
