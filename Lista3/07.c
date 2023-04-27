#include <stdio.h>

int main(void)
{
    int num, soma=0, i;
    float media;

    for(i=1; i<=10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num<0){
            printf("Digite um numero: ");
            scanf("%d", &num);
        }
        soma = soma+ num;
    }
    media = soma/10.0;

    printf("A media dos 10 numeros positivos eh: %.1f.\n", media);

    return 0;
}
