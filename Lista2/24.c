#include <stdio.h>

int main(void)
{
    int opcaoEstado;
    float precoInicial, precoFinal;

    printf("\tPreco final do PRODUTO\n");
    printf("Escolha uma das opcoes abaixo\n");
    printf("1 - MG Minas Gerais\n");
    printf("2 - SP Sao Paulo\n");
    printf("3 - RJ Rio de Janeiro\n");
    printf("4 - MS Mato Grosso do Sul\n");
    printf("\tOpcao: ");
    scanf("%d", &opcaoEstado);
    printf("Digite o valor inicial do produto: ");
    scanf("%f", &precoInicial);

    switch (opcaoEstado){
        case 1:
            precoFinal = precoInicial*1.07;
            printf("O preco final eh R$%.2f\n", precoFinal);
            break;
        case 2:
            precoFinal = precoInicial*1.12;
            printf("O preco final eh R$%.2f\n", precoFinal);
            break;
        case 3:
            precoFinal = precoInicial*1.15;
            printf("O preco final eh R$%.2f\n", precoFinal);
            break;
        case 4:
            precoFinal = precoInicial*1.08;
            printf("O preco final eh R$%.2f\n", precoFinal);
            break;
        default:
            printf("Opcao selecionada incorreta.\n");
    }

    return 0;
}
