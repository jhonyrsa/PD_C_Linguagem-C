#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 15

int main(int argc, char *argv[]) {
	
	float nota[15];
	
	float soma=0.0;
	
	float mediaGeral;
	
	int i;
	
	printf("\tCALCULADORA DE MEDIA GERAL\n");
	for(i=0; i<TAM_MAX; i++){
		printf("Digite a nota do aluno n_o %2d: ", i+1);
		scanf("%f", &nota[i]);
		
		soma = soma + nota[i];
	}
	
	mediaGeral = soma/TAM_MAX;
	
	printf("MEDIA GERAL %.1f\n", mediaGeral);
	
	return 0;
}
