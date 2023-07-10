#include <stdio.h>

int main(void)
{
    float valor, nvalor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    nvalor = valor*(1-0.12);

    printf("O valor com desconto eh $ %.2f.\n", nvalor);

    return 0;
}
