#include <stdio.h>

int main(void)
{
    double number;

    printf("Digite um numero A: ");
    scanf("%lf", &number);

    double fifthPart = number/5.0;

    printf("\n%lf/5 = %lf\n", number, fifthPart);

    return 0;
}
