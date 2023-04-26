#include <stdio.h>

int main(void)
{
    float altura, massa, IMC;

    printf("\n\tIMC EXPRESS\n");
    printf("|    IMC    \t|         CLASSIFICACAO        |\n");
    printf("|     < 18.5\t| Abaixo da massa              |\n");
    printf("|18.6 - 24.9\t| Saudavel                     |\n");
    printf("|25.0 - 29.9\t| Peso em excesso              |\n");
    printf("|30.0 - 34.9\t| Obesidade Grau I             |\n");
    printf("|35.0 - 39.9\t| Obesidade Grau II  (severa)  |\n");
    printf("|    >= 40.0\t| Saudavel  Grau III (morbida) |\n\n");

    printf("Informe a altura (m): ");
    scanf("%f", &altura);
    printf("Informe a massa (kg): ");
    scanf("%f", &massa);

    IMC = massa/(altura*altura);

    if(IMC>=0.0 && IMC<=18.5)
        printf("\nIMC = %.1f. ABAIXO DO PESO.\n", IMC);
    else if(IMC>18.5 && IMC<24.9)
        printf("\nIMC = %.1f. SAUDAVEL.\n", IMC);
    else if(IMC>=24.9 && IMC<29.9)
        printf("\nIMC = %.1f. PESO EM EXCESSO.\n", IMC);
    else if(IMC>=29.9 && IMC<34.9)
        printf("\nIMC = %.1f. OBESIDADE GRAU I.\n", IMC);
    else if(IMC>=34.9 && IMC<=39.9)
        printf("\nIMC = %.1f. OBESIDADE GRAU II (SEVERA).\n", IMC);
    else if(IMC>39.9)
        printf("\nIMC = %.1f. OBESIDADE GRAU III (MORBIDA).\n", IMC);
    else
        printf("\nA massa foi indicada de forma equivocada.\n");

    return 0;
}
