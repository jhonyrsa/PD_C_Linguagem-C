#include <stdio.h>

int main(void)
{
    int numA, numB, numC;

    printf("Digite valor de A: ");
    scanf("%d", &numA);
    printf("Digite valor de B: ");
    scanf("%d", &numB);
    printf("Digite valor de C: ");
    scanf("%d", &numC);

    int sum = numA + numB + numC;

    printf("A soma A + B + C = %d\n", sum);

    return 0;
}
