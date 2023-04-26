#include <stdio.h>

int main(void)
{
    int num, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &num);

    antecessor = num-1;
    sucessor = num+1;

    printf("O antecessor de %d eh %d.\nO sucessor de %d eh %d.\n", num, antecessor, num, sucessor);

    return 0;
}
