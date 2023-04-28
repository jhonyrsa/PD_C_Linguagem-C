#include <stdio.h>
//i'll be back!
int main(void)
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    do{
        numero++;
    }while(((numero%11)==0) && ((numero%13)==0) && ((numero%17)==0));

    printf("O primeiro numero multiplo de 11, 13 e 17 simultaneamente eh %d.\n", numero);

    return 0;
}
