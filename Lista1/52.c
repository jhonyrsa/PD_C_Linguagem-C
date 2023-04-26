#include <stdio.h>

int main(void)
{
    float amigo1, amigo2, amigo3, apostaTotal;
    float proporcao1, proporcao2, proporcao3, premio;

    printf("Digite quanto o Amigo 1 investiu na aposta: ");
    scanf("%f", &amigo1);
    printf("Digite quanto o Amigo 2 investiu na aposta: ");
    scanf("%f", &amigo2);
    printf("Digite quanto o Amigo 3 investiu na aposta: ");
    scanf("%f", &amigo3);

    apostaTotal = amigo1+amigo2+amigo3;

    proporcao1 = amigo1/apostaTotal;
    proporcao2 = amigo2/apostaTotal;
    proporcao3 = amigo3/apostaTotal;

    printf("Digite o valor do premio ganho: ");
    scanf("%f", &premio);

    printf("O Amigo 1 recebeu $%.2f como premio.\n", proporcao1*premio);
    printf("O Amigo 2 recebeu $%.2f como premio.\n", proporcao2*premio);
    printf("O Amigo 3 recebeu $%.2f como premio.\n", proporcao3*premio);

    return 0;
}
