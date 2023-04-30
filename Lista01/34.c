#include <stdio.h>
#define pi 3.14159265

int main(void)
{
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi*raio*raio;

    printf("Area = %.2f\n", area);

    return 0;
}
