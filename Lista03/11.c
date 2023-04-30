#include <stdio.h>

int main(void)
{
    int numero, i;

    printf("Defina uma quantidadade de numeros a ser exibido: ");
    scanf("%d", &numero);

    for(i=0; i<=numero; i++){
        printf("%d\n", i);
    }

    return 0;
}
