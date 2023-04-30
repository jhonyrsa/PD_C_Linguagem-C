#include <stdio.h>

int main(void)
{
    float baseMaior, baseMenor, altura, area;

    printf("Area do TRAPEZIO\n");
    printf("Digite a base maior: ");
    scanf("%f", &baseMaior);
    printf("Digite a base menor: ");
    scanf("%f", &baseMenor);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    if(baseMaior>0 && baseMenor>0){
        area = ((baseMaior+baseMenor)*altura)/2;
        printf("Area: %.2f ud^2.\n", area);
    }
    else
        printf("Medidas invalidas.\n");

    return 0;
}
