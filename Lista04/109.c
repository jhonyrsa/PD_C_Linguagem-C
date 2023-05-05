#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 6

int main(int argc, char *argv[]) {
	
	int vet[TAM_MAX];
	
	int i=0;
	
	while(i<TAM_MAX){
		printf("Digite um valor: ");
		scanf("%d", &vet[i]);
		
		if(vet[i]%2==0){
			i++;
		}
	}
	
	printf("\nVetor inverso de numeros pares digitados\n");
	for(i=(TAM_MAX-1); i>=0; i--){
		if(i==5)
			printf("[%d,", vet[i]);
		else if(i==0)
			printf(" %d]\n", vet[i]);
		else
			printf(" %d,", vet[i]);
	}
	
	return 0;
}
