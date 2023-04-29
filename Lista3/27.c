#include <stdio.h>

int main(void)
{
    int i, n;
    float soma=1.0;
    printf("Digite um numero inteiro > 0: ");
    scanf("%d", &n);

    for(i=n; i>1; i--){
        soma = soma + (1.0/i);
    }

    printf("Seu harmônico eh: %.3f\n.", soma);

    return 0;
}
