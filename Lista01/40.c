#include <stdio.h>

float calculadoraSalario(int dias);

int main(void){
    int diasTrabalhados;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    float salario = calculadoraSalario(diasTrabalhados);

    printf("Salario com descontos: R$%.2f\n", salario);

    return 0;
}

float calculadoraSalario(int dias){
    return 0.92*30.00*dias;
}
