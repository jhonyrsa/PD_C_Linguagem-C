#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 10

int main(int argc, char *argv[]) {
	int vet[TAM_MAX];
	
	int maior, menor;
	
	int i;
	for(i=0; i<TAM_MAX; i++){
		printf("Digite um valor inteiro: ");
		scanf("%d", &vet[i]);
		
		if(i==0){
			menor = vet[i];
			maior = vet[i];
		}
		
		else{
			if(menor>vet[i])
				menor = vet[i];
			else if(maior<vet[i])
				maior = vet[i];
		}
	}
	printf("\n");
	printf("Maior elemento: %d\n", maior);
	printf("Menor elemento: %d\n", menor);
	
	return 0;
}
