#include <stdio.h>

int main(void)
{
    float notas, somaNotas=0, media;

    int contagem=0;

    do{
        printf("Digite uma nota entre 10 e 20: ");
        scanf("%f", &notas);

        somaNotas = somaNotas+notas;
        contagem = contagem+1;
    }while(notas>=10.0 && notas<=20.0);

    media = somaNotas/contagem;

    printf("A media das notas digitadas eh %.1f.\n", media);

    return 0;
}
