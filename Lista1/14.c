#include <stdio.h>
#define pi 3.14

int main()
{
    float graus, radianos;

    printf("Digite a medida em graus: ");
    scanf("%f", &graus);

    radianos = graus*pi/180.0;

    printf("A = %.2f rad.\n", radianos);

    return 0;
}
