#include <stdio.h>

int main(void)
{
    int hora1, hora2, minuto1, minuto2, segundo1, segundo2, segundosInicio, segundosDuracao, segundosTotais;

    printf("Digite a hora, minuto e segundo que se iniciou o experimento separados por espaco: ");
    scanf("%d %d %d", &hora1, &minuto1, &segundo1);
    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &segundosDuracao);

    segundosInicio = hora1*3600 + minuto1*60 + segundo1;
    segundosTotais = segundosDuracao+segundosInicio;
    hora2 = segundosTotais/3600;
    minuto2 = (segundosTotais%3600)/60;
    segundo2 = (segundosTotais%3600)%60;

    printf("O experimento finalizara em %2d h %2d m %2d s.\n", hora2, minuto2, segundo2);

    return 0;
}
