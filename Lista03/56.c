#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
	int i=0;
 
	int soma = 0;
 
	int j, aux;
 
	for(j=2;j<=5;j++){
 		aux = j;
 		
		for(i=2; i<aux; i++){
			if(aux%i==0){
				aux=0;
				break;
			}				
		}
		soma = soma+aux;
	}
 
	printf("Soma = %d\n", soma);
 
 	getchar();
	return 0;
}
/*
	Este algoritmo funciona, não tive paciência para esperar até 2.000.000, estava na Biblioteca do CE
	quando fiz ele
	Pode ser que haja algum mais eficiente que este.
*/
