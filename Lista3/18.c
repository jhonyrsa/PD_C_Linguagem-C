#include <stdio.h>

int main (void)
{
    int numero, auxMaior, quantidade, i, repeticao;

    printf("Digite a quantidade numeros a ser lida: ");
    scanf("%d", &quantidade);

    printf("Digite o 1 termo: ");
    scanf("%d", &numero);

    auxMaior = numero;
    repeticao = 1;

    for(i=2; i<=quantidade;i++){
        printf("Digite o %d termo: ", i);
        scanf("%d", &numero);

        if(numero>auxMaior){
            auxMaior = numero;
            repeticao = 1;
        }
        else if(numero==auxMaior)
            repeticao = repeticao+1;
    }

    printf("O maior numero digitado foi: %d.\n", auxMaior);
    printf("Repetiu %d vezes.\n", repeticao);

    return 0;
}
