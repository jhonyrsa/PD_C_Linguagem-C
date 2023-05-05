#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_MAX 8

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	int vet[TAM_MAX];
	
	int X, Y, SOMA;
	
	int i;
	for(i=0; i<TAM_MAX; i++){
		printf("Digite o %d° elemento: ", i+1);
		scanf("%d", &vet[i]);			
	}
	
	printf("Digite o valor de X: ");
	scanf("%d", &X);
	printf("Digite o valor de Y: ");
	scanf("%d", &Y);
	
	SOMA = vet[X]+vet[Y];
	
	printf("Soma = vet[%d] + vet[%d] = %d\n", X, Y, SOMA);
		
	return 0;
}
