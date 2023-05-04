#include <stdio.h>

int main(void)
{
    int saque;

    while(1){
        printf("---------- SISTEMA DE SAQUES PROGBANK ---------- \n");
        printf("\tDigite o valor do saque: ");
        scanf("%d", &saque);

        int cemReais=0, cinquentaReais=0, vinteReais=0, dezReais=0, cincoReais=0, doisReais=0, umReal=0, opcao=0;

        cemReais = saque/100;
        cinquentaReais = (saque%100)/50;
        vinteReais = ((saque%100)%50)/20;
        dezReais = (((saque%100)%50)%20)/10;
        cincoReais = ((((saque%100)%50)%20)%10)/5;
        doisReais = (((((saque%100)%50)%20)%10)%5)/2;
        umReal = (((((saque%100)%50)%20)%10)%5)%2;

        printf("\n------------------- SAQUE ----------------------\n");
        printf("R$ 100.00: %2d notas\n", cemReais);
        printf("R$  50.00: %2d notas\n", cinquentaReais);
        printf("R$  20.00: %2d notas\n", vinteReais);
        printf("R$  10.00: %2d notas\n", dezReais);
        printf("R$   5.00: %2d notas\n", cincoReais);
        printf("R$   2.00: %2d notas\n", doisReais);
        printf("R$   1.00: %2d notas\n\n", umReal);

        realizarNovoSaque:
        printf("Deseja realizar novo saque? (1 - Sim/ 2 - Nao)? ");
        scanf("%d", &opcao);
        if(opcao==2)
            break;
        else if(opcao<1 || opcao>2){
            printf("Opcao desconhecida.\n");
            goto realizarNovoSaque;
        }
    }

    return 0;
}
