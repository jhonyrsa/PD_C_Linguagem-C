#include <stdio.h>
#define TAM_MAX 5
int main(void)
{
    int vet[TAM_MAX];

    int i, posicaoMaior, posicaoMenor, maior, menor;

    for(i=0; i<TAM_MAX; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if(i==0){
            maior = vet[i];
            posicaoMaior =i;
            menor = vet[i];
            posicaoMenor = i;
        }
        else if(maior<vet[i]){
            maior = vet[i];
            posicaoMaior = i;
        }
        else if(menor>vet[i]){
            menor = vet[i];
            posicaoMenor = i;
        }
    }
    printf("O maior valor se encontra em vet[%d]\n", posicaoMaior);
    printf("O menor valor se encontra em vet[%d]\n", posicaoMenor);

    return 0;
}
