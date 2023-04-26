#include <stdio.h>

int main(void)
{
    float trabLaboratorio, avaliacaoSemestral, exameFinal, media;

    printf("Digite as notas das atividades (Intervalo 0-10).\n");
    printf("Trabalho de laboratorio: ");
    scanf("%f", &trabLaboratorio);
    printf("Avaliacao semestral: ");
    scanf("%f", &avaliacaoSemestral);
    printf("Exame final: ");
    scanf("%f", &exameFinal);

    media = (trabLaboratorio*2+avaliacaoSemestral*3+exameFinal*5)/10;

    if(media>=5.0)
        printf("Media: %.1f.\nAprovado.\n", media);
    else if(media>=3.0 && media<5.0)
        printf("Media: %.1f.\nEm recuperacao.\n", media);
    else
        printf("Media: %.1f.\nReprovado.\n", media);

    return 0;
}
