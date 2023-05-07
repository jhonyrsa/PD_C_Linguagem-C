//Inclui o pacote de entrada e saída de dados padrão
#include <stdio.h>
//Define uma constante com valor de 5
#define TAM_MAX 5

//Principal funcao do programa
int main(void){
    //Vetor de tamanho maximo 5
    float vet[TAM_MAX];
    //Variável contadora;
    int i, posicaoMaior, posicaoMenor;
    //Variável para realizar a soma dos valores digitados
    float soma=0.0;
    //Variável para armazenar o menor e o maior valor digitado
    float maior, menor;
    //Variável para armazenar a media da sequencia;
    float media;

    for(i=0; i<TAM_MAX;i++){
        printf("Digite um valor real: ");
        scanf("%f", &vet[i]);

        if(i==0){
            maior=vet[i];
            posicaoMaior = i;
            menor=vet[i];
            posicaoMenor = i;
        }
        else if(maior<vet[i]){
            maior=vet[i];
            posicaoMaior = i;
        }
        else if(menor>vet[i]){
            menor=vet[i];
            posicaoMenor = i;
        }
        soma = soma+vet[i];
    }
    media = soma/TAM_MAX;

    for(i=0; i<TAM_MAX; i++){
        if(i==0)
            printf("[%.1f,", vet[i]);
        else if(i==(TAM_MAX-1))
            printf(" %.1f]\n", vet[i]);
        else
            printf(" %.1f,", vet[i]);
    }

    printf("Maior: vet[%d] = %.1f\n", posicaoMaior, maior);
    printf("Menor: vet[%d] = %.1f\n", posicaoMenor, menor);
    printf("Media: %.2f\n", media);

    return 0;
}
