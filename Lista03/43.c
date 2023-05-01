#include <stdio.h>

int main(void)
{
    int idade, contador=0;
    float soma = 0.0, media;

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    while(1){
        if(idade <=0)
            break;
        else{
            soma = soma + idade;
            contador++;
        }
        printf("Digite uma idade: ");
        scanf("%d", &idade);
    }
    media = soma/contador;
    printf("A media das idades digitadas eh %.2f anos\n", media);

    return 0;
}
