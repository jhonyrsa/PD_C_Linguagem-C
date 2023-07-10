#include <stdio.h>
#define pi 3.14159265

int main(void)
{
    float volume, raio, altura;

    printf("Digite o tamanho do raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite o tamanho da altura do cilindro: ");
    scanf("%f", &altura);

    volume = pi*raio*raio*altura;

    printf("O volume do cilindro eh %.2f u^3\n", volume);

    return 0;
}
