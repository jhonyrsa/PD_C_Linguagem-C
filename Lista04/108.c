#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 6

int main(int argc, char *argv[]) {
	
	int vet[TAM_MAX];
	int i;
	
	for(i=0; i<TAM_MAX; i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
	}
	
	printf("\nOrdem inversa do vetor:\n");
	for(i=5;i>=0; i--){
		if(i==5)
			printf("[%d,", vet[i]);
		else if (i==0)
			printf(" %d]", vet[i]);
		else
			printf(" %d,", vet[i]);
		
	}
	
	return 0;
}
