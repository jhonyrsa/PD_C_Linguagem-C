#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 10

int main(int argc, char *argv[]) {
	
	int vet[TAM_MAX];
	int contaPar=0, i;
	
	for(i=0; i<TAM_MAX; i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
		if(vet[i]%2==0)
			contaPar++;
	}
	
	printf("Existem %d numeros pares no vetor.\n", contaPar);	
	
	return 0;
}
