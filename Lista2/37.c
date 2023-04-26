#include <stdio.h>
#include <math.h>

int main(void)
{
    int  hora1, minuto1, hora2, minuto2, minutosTotais, excedenteTempo;
    float valorEstacionamento=0;

    printf("Informe a hora que o carro chegou no estacionamento (XX YY): ");
    scanf("%d %d", &hora1, &minuto1);
    printf("Informe a hora que o carro esta saindo do estacionamento (XX YY): ");
    scanf("%d %d", &hora2, &minuto2);

    minutosTotais = (hora2*60+minuto2)-(hora1*60+minuto1);
    //printf("Minutos totais: %d.\n", minutosTotais);

    if(minutosTotais<0){
        minutosTotais = 1440 - abs((hora2*60+minuto2)-(hora1*60+minuto1));

        int horasTotais = minutosTotais/60;

        if(minutosTotais%60!=0)
            horasTotais = horasTotais+1;
            //printf("Horas totais: %d.\n", horasTotais);

        if(horasTotais>=5){
           excedenteTempo = horasTotais-4;
           valorEstacionamento = 2.0*excedenteTempo;
           horasTotais = 4;
        }
        if(horasTotais>=3 && horasTotais<=4){
            excedenteTempo = horasTotais-2;
            valorEstacionamento = valorEstacionamento+1.4*excedenteTempo;
            horasTotais = 2;
        }
        if(horasTotais>=1 && horasTotais<=2){
            valorEstacionamento = valorEstacionamento+1.0*horasTotais;
        }
    }
    else{
        int horasTotais = minutosTotais/60;

        if(minutosTotais%60!=0)
            horasTotais = horasTotais+1;
            //printf("Horas totais: %d.\n", horasTotais);

        if(horasTotais>=5){
           excedenteTempo = horasTotais-4;
           valorEstacionamento = 2.0*excedenteTempo;
           horasTotais = 4;
        }
        if(horasTotais>=3 && horasTotais<=4){
            excedenteTempo = horasTotais-2;
            valorEstacionamento = valorEstacionamento+1.4*excedenteTempo;
            horasTotais = 2;
        }
        if(horasTotais>=1 && horasTotais<=2){
            valorEstacionamento = valorEstacionamento+1.0*horasTotais;
        }
    }

    printf("O valor a ser pago eh R$ %.2f.\n", valorEstacionamento);

    return 0;
}
