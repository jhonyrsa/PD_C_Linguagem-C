#include <stdio.h>

int main(void)
{
    float media, nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3*2)/4;

    if(media>=60)
        printf("Media: %.1f.\nAluno aprovado.\n", media);
    else
        printf("Media: %.1f.\nAluno reprovado.\n", media);

    return 0;
}
