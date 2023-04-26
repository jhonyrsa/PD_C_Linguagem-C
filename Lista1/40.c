#include <stdio.h>

int main(void)
{
    float salario;
    int dias;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    salario = 30.0*dias*.92;

    printf("O salario do pintor eh $ %.2f.\n", salario);

    return 0;
}
