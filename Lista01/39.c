#include <stdio.h>

int main(void)
{
    float primeiro, segundo, terceiro;

    primeiro = 780000*.46;
    segundo = 780000*.32;
    terceiro = 780000 - (primeiro+segundo);

    printf("O primeiro ganhou $ %.2f\nO segundo ganhou $ %.2f\nO terceiro ganhou $ %.2f\n", primeiro, segundo, terceiro);

    return 0;
}
