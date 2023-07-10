#include <stdio.h>

int main(void)
{
    char letra, nletra;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);

    nletra = letra+32;

    printf("A letra minuscula eh %c.\n", nletra);

    return 0;
}
