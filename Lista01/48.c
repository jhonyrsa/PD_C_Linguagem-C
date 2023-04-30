#include <stdio.h>

int main(void)
{
    int segundosTotais, segundos, minutos, horas;

    printf("Digite a quantidade de tempo total em segundos: ");
    scanf("%d", &segundosTotais);

    horas = segundosTotais/3600;
    minutos = (segundosTotais%3600)/60;
    segundos = (segundosTotais%3600)%60;

    printf("Tempo decorrido: %2d h %2d m %2d s\n", horas, minutos, segundos);

    return 0;
}
