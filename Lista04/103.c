#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 10

int main(int argc, char *argv[]) {
	
	int vetNum[TAM_MAX], vetQuadrado[TAM_MAX], i;
	
	for(i=0; i<TAM_MAX; i++){
		scanf("%d", &vetNum[i]);
		vetQuadrado[i] = vetNum[i]*vetNum[i];
	}
	
	printf("Numero\tQuadrado\n");
	for(i=0; i<TAM_MAX; i++){
		printf("%6d", vetNum[i]);
		printf("\t%8d\n", vetQuadrado[i]);
	}
	
	return 0;
}
