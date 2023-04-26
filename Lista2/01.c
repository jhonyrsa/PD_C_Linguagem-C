#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1>num2)
        printf("O %d eh o maior.\n", num1);
    else
        printf("O %d eh o maior.\n", num2);

    return 0;
}
