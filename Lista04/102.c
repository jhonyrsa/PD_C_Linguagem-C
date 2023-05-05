#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 6

int main(int argc, char *argv[]) {
	
	int vet[TAM_MAX];
	
	int i;
	
	for(i=0; i<TAM_MAX; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<TAM_MAX; i++){
		printf("\t%d", vet[i]);
	}
	
	
	return 0;
}
