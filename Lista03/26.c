#include <stdio.h>
//i'll be back!
int main(void)
{
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i=numero;;i++){
        if((i%11==0)&&(i%13==0)&&(i%17==0))
            break;
    }

    printf("O proximo numero a ser divisivel por 11, 13 e 17 eh %d\n", i);

    return 0;
}
