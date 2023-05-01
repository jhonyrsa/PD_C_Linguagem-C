#include <stdio.h>

int main(void)
{
    int opcao;
    float num1, num2, resultado;

    while(1){
        printf("Escolha uma opcao\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Saida\n");
        printf("\tOpcao: ");
        scanf("%d", &opcao);

        if(opcao<=1 && opcao>=5)
            printf("Opcao invalida\n");
        else if(opcao==1){
            printf("Digite o 1 numero: ");
            scanf("%f", &num1);
            printf("Digite o 2 numero: ");
            scanf("%f", &num2);
            resultado = num1+num2;
            printf("Resultado = %.2f\n\n", resultado);
        }
        else if(opcao==2){
            printf("Digite o 1 numero: ");
            scanf("%f", &num1);
            printf("Digite o 2 numero: ");
            scanf("%f", &num2);
            resultado = num1-num2;
            printf("Resultado = %.2f\n\n", resultado);
        }
        else if(opcao==3){
            printf("Digite o 1 numero: ");
            scanf("%f", &num1);
            printf("Digite o 2 numero: ");
            scanf("%f", &num2);
            resultado = num1*num2;
            printf("Resultado = %.2f\n\n", resultado);
        }
        else if(opcao==4){
            printf("Digite o 1 numero: ");
            scanf("%f", &num1);
            printf("Digite o 2 numero: ");
            scanf("%f", &num2);
            resultado = num1/num2;
            printf("Resultado = %.2f\n", resultado);
        }
        else{
            printf("Obrigado por calcular.\n");
            break;
        }
    }

    return 0;
}
