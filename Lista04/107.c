#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 10

int main(int argc, char *argv[]) {
	int vet[TAM_MAX];
	
	int maior, posicao, i;
	
	for(i=0; i<TAM_MAX; i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
		
		if(i==0){
			maior=vet[i];
			posicao = i;
		}
		else if(maior<vet[i]){
			maior=vet[i];
			posicao = i;
		}
	}
	
	for(i=0; i<TAM_MAX; i++){
		if(i>0 && (i+1)%5==0)
			printf("\t%d\n",vet[i]);
		else
			printf("\t%d", vet[i]);
	}
	
	printf("\n");
	printf("\nMaior elemento: %d\n", maior);
	printf("Localizado no indice vet[%d]\n", posicao);
	
	return 0;
}
