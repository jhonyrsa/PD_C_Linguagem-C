#include <stdio.h>

int main(void)
{
    int numero, a, b, c, d;
    printf("Digite um numero de quatro digitos (1000 a 9999): ");
    scanf("%d", &numero);

    a = numero/1000;
    b = (numero%1000)/100;
    c = ((numero%1000)%100)/10;
    d = ((numero%1000)%100)%10;

    printf("%d\n%d\n%d\n%d\n",a,b,c,d);

    return 0;
}
