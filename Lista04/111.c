#include <stdio.h>
#define TAM_MAX 10

int main (void){
    //Vetor real com tamanho máximo 10
    float vet[TAM_MAX];
    //Variáveis contadoras
    int i, contagemNegativos=0;
    //Variável de soma de positivos
    float soma=0.0;

    //Loop para entrada e processamento de valores
    for(i=0; i<TAM_MAX; i++){
        //entrada dos numeros
        printf("Digite um numero real: ");
        scanf("%f", &vet[i]);

        //Se o numero for negativo, a variável contadora de negativos
        //vai adicionar 1 unidade;
        if(vet[i]<0)
            contagemNegativos++;
        //Se o numero for positivo, a variavel soma sofrerá um acres-
        //cimo do valor digitado na iteração i
        else
            soma=soma+vet[i];
    }

    //Apresentação de dados
    printf("Quantidade de numeros negativos: %d\n", contagemNegativos);
    printf("Soma de positivos: %.1f\n", soma);

    //Informa ao sistema operacional que o programa finalizou com sucesso;
    return 0;
}
