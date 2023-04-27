#include <stdio.h>

int main(void)
{
    int i, num, soma=0;
    float media;

    for(i=1; i<=10; i++){
        printf("Digite %2d numero: ", i);
        scanf("%d", &num);
        soma = soma+num;
    }
    media = soma/10.0;

    printf("A media dos 10 numeros eh %.1f.\n", media);

    return 0;
}
