#include <stdio.h>

int main(void)
{
    int i, soma=0;

    for(i=0; i<=50; i++){
        soma = soma+2*i;
    }

    printf("Sn = %d.\n", soma);

    return 0;
}
