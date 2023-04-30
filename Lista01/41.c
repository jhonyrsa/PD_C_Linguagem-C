#include <stdio.h>

int main(void)
{
    float valorHora, salario;
    int horas;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    salario = valorHora*horas*1.1;

    printf("O salario eh $ %.2f\n", salario);

    return 0;
}
