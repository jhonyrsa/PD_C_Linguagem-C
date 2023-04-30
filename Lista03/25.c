#include <stdio.h>

int main(void)
{
    int i, soma=0;

    for(i=0; i<=1000; i++){
        if(i%3==0 && i%5==0)
            soma = soma+i;
        else if(i%3==0)
            soma = soma+i;
        else if(i%5==0)
            soma = soma+i;
    }

    printf("Sn < 1000 | 3 ou por 5 eh %d.\n", soma);

    return 0;
}
