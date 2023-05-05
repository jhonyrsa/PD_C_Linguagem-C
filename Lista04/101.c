#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//(a) Atribuindo os valores ao vetor A
	int A[] = {1,0,5,-2,-5,7};
	
	//Armazenando a soma dos valores do vetor na variável simples *soma*
	int soma = A[0]+A[1]+A[5];
	
	printf("Soma dos indices 0, 1 e 5: %d\n", soma);
	
	A[4] = 100;
	
	int i;
	
	for(i=0; i<6; i++){
		printf("%d\n", A[i]);
	}
	
	
	return 0;
}
