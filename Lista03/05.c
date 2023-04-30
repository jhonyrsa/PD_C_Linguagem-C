#include <stdio.h>

int main(void){
    int num, i, soma=0;

    for(i=1; i<=10; i++){
        printf("Digite o %2d numero: ", i);
        scanf("%d", &num);
        soma = soma+num;
    }
    printf("Os 10 numeros somaram: %d.\n", soma);

    return 0;
}
