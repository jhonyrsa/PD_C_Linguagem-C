#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y, z, opcao=0;
    float media;

    printf("\tCalculadora de MEDIAS\n");
    printf("Escolha uma das opcoes abaixo para calcular\n");
    printf("1 - Media Geometrica\n");
    printf("2 - Media Ponderada\n");
    printf("3 - Media Harmonica\n");
    printf("4 - Media Aritmetica\n");
    printf("\tOpcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);

    switch(opcao){
        case 1:
            media = cbrt(x*y*z);
            printf("Media Geometrica = %.2f\n", media);
            break;
        case 2:
            media = (x+2*y+3*z)/6.0;
            printf("Media Ponderada = %.2f\n", media);
            break;
        case 3:
            media = 1.0/((1.0/x)+(1.0/y)+(1.0/z));
            printf("Media Harmonica = %.2f\n", media);
            break;
        case 4:
            media = (x+y+z)/3.0;
            printf("Media Aritmetica = %.2f\n", media);
            break;
        default:
            printf("Opcao escolhida nao reconhecida.\n");
    }

    return 0;
}
