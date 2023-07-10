#include <stdio.h>

int somador(int num);

int main(void){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int soma = somador(numero);

    printf("A soma calculada = %d\n", soma);

    return 0;
}

int somador(int num){
    return (((num*3)+1) + ((num*2)-1));
}
