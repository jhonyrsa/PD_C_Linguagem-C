#include <stdio.h>

int main(void)
{
    int ano;

    printf("\tVerificador de anos bissexto\n\n");
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(ano%400==0 || (ano%4==0 && ano%100!=0))
        printf("O ano verificado eh BISSEXTO\n");
    else
        printf("O ano verificado nao eh BISSEXTO\n");

    return 0;
}
