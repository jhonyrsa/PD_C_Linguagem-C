#include <stdio.h>
#include <math.h>

int main(void)
{
    int number, logaritmo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    if(number>=0){
        logaritmo = log(number);
        printf("log (%d) = %d.\n", number, logaritmo);
    }
    else
        printf("Numero invalido\n");

    return 0;
}
