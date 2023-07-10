#include <stdio.h>

int main(void)
{
    int numero, a, b, c;

    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &numero);

    a = numero/100;
    b = (numero%100)/10;
    c = (numero%100)%10;

    printf("Numero lido   = %d.\n", numero);
    printf("Numero gerado = %d%d%d.", c,b,a);

    return 0;
}
