#include <stdio.h>

int main(void)
{
    float num;

    printf("Digite um numero real A: ");
    scanf("%f", &num);

    float square = num*num;

    printf("\nA*A = %f\n", square);

    return 0;
}
