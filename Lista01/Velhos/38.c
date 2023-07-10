#include <stdio.h>

int main(void)
{
    float salario, nsalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    nsalario = salario*1.25;

    printf("O novo salario eh $ %.2f.\n", nsalario);

    return 0;
}
