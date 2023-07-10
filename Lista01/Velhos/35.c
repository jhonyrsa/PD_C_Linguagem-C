#include <stdio.h>
#include <math.h>

int main(void)
{
    float hipotenusa, a, b;

    printf("Digite o valor dos catetos a e b separados por espaco: ");
    scanf("%f %f", &a, &b);

    hipotenusa = sqrt(a*a + b*b);

    printf("A hipotenusa mede %.2f\n", hipotenusa);

    return 0;
}
