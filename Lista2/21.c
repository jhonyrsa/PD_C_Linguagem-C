#include <stdio.h>

int main(void)
{
    int opcao;

    printf("Escolha a opcao:\n");
    printf("1 - Soma de 2 numeros.\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3 - Produto entre 2 numeros.\n");
    printf("4 - Divisao entre 2 numeros (O denominador n pode ser zero).\n ");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if(opcao==1 || opcao==2 || opcao==3 || opcao== 4){
        float numero1, numero2, resultado;
        printf("Digite os numeros separados por espaco: ");
        scanf("%f %f", &numero1, &numero2);
        switch (opcao){
            case 1:
                resultado = numero1+numero2;
                break;
            case 2:
                if(numero1>=numero2)
                    resultado = numero1-numero2;
                else
                    resultado = numero2-numero1;
                break;
            case 3:
                resultado = numero1*numero2;
                break;
            case 4:
                if(numero2==0)
                    printf("Indefinido.\n");
                else
                    resultado = numero1/numero2;
        }
        if(opcao='4' && numero2==0)
            printf("Resultado Indefinido.\n");
        else
            printf("Resultado = %.2f.\n", resultado);
    }
    else
         printf("Opcao desejada invalida.\n");

    return 0;
}
