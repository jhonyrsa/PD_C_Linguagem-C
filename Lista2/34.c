#include <stdio.h>

int main(void)
{
    int faltas;
    float nota;

    printf("\tCONCEITUADOR DE ALUNOS\n\n");
    printf("Digite a nota do aluno: ");
    scanf("%f",&nota);
    printf("Digite a quantidade de faltas: ");
    scanf("%d",&faltas);

    if(faltas>=0 && faltas<=20){
        if(nota>=9.0 && nota<=10.0)
            printf("Conceito: A\n");
        else if(nota>=7.5 && nota<9.0)
            printf("Conceito: B\n");
        else if(nota>=5.0 && nota<7.5)
            printf("Conceito: C\n");
        else if(nota>=4.0 && nota<5.0)
            printf("Conceito: D\n");
        else if(nota>=0.0 && nota<4.0)
            printf("Conceito: E\n");
        else
            printf("\aNota informada invalida. Intervalo reconhecido: 0.0 - 10.0\n");
    }
    else if(faltas>20){
        if(nota>=9.0 && nota<=10.0)
            printf("Conceito: B\n");
        else if(nota>=7.5 && nota<9.0)
            printf("Conceito: C\n");
        else if(nota>=5.0 && nota<7.5)
            printf("Conceito: D\n");
        else if(nota>=4.0 && nota<5.0)
            printf("Conceito: E\n");
        else if(nota>=0.0 && nota<4.0)
            printf("Conceito: E\n");
        else
            printf("\aNota informada invalida. Intervalo reconhecido: 0.0 - 10.0\n");
    }
    else
        printf("\aQuantidade de faltas informadas invalidas.\n");

    return 0;
}
