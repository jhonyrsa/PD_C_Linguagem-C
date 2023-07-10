#include <stdio.h>

float calculadoraSalario(float salario);

int main(void){
    float salarioAntigo;

    printf("Digite o salario antigo do funcionario: ");
    scanf("%f", &salarioAntigo);

    float novoSalario = calculadoraSalario(salarioAntigo);

    printf("Salario novo: R$%.2f\n", novoSalario);

    return 0;
}

float calculadoraSalario(float salario){
    return 1.25*salario;
}
