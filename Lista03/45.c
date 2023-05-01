#include <stdio.h>

int main(void)
{
    float kmh, ms;

    int opcao;

    printf("Escolha uma opcao\n");
    printf("1 - Converter\n2 - Finalizar\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    while(1){

        if(opcao==2){
            printf("Voce escolheu finalizar\n");
            break;
        }
        else if(opcao==1){
            printf("Digite a velocidade em km/h: ");
            scanf("%f", &kmh);
            ms = kmh/3.6;
            printf("v = %.2f m/s\n\n", ms);
        }
        else{
            printf("Opcao desconhecida\n\n");
            continue;
        }
        printf("Escolha uma opcao\n");
        printf("1 - Converter\n2 - Finalizar\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
    }

    return 0;
}
