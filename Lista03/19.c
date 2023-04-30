#include <stdio.h>

int main(void)
{
    int numero, a, b, c;

    printf("Digite um numero de 100-999: ");
    scanf("%d", &numero);

    a = numero/100;
    b = (numero%100)/10;
    c = (numero%100)%10;

    printf("Centenas: %d\n", a);
    printf("Dezenas : %d\n", b);
    printf("Unidades: %d\n", c);

    return 0;
}
