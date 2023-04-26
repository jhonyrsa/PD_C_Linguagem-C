#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int a, b, resultado;

    a = 1+(rand()%100);
    b = 1+(rand()%100);

    printf("\nQual o resultado da soma %d + %d = ", a, b);
    scanf("%d", &resultado);

    if((a+b) == resultado)
        printf("Resultado correto!\n");
    else
        printf("Resultado incorreto!\n");

    return 0;
}
