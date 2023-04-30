#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d",&num1, &num2);

    if(num1>num2)
        printf("O maior dos dois eh %d e a diferenca entre eles eh %d.\n", num1, num1-num2);
    else
        printf("O maior dos dois eh %d e a diferenca entre eles eh %d.\n", num2, num2-num1);

    return 0;
}
