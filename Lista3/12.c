#include <stdio.h>

int main(void)
{
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i=numero; i>=0; i--){
        printf("%d\n", i);
    }

    return 0;
}
