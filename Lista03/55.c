#include <stdio.h>

int main(void)
{
	//N�mero de numeros primos
	int N;
	//Soma dos N primeiros numeros primos
	int soma = 0;
	//Contadores
	int contagem=0, i;
	//Numero primo
	int numeroPrimo, aux;
	
	printf("Digite um numero natural: ");
	scanf("%d", &N);
	
	
	numeroPrimo = 2;
	aux = numeroPrimo;
	//Enquanto a contagem de numeros primos for diferente de N, 
	while(contagem!=N){
		numeroPrimo = aux;
		//Verificador se eh numero primo
		for(i=2;i<numeroPrimo;i++){
			
			//Se n�o for numero primo, atribui a vari�vel numero primo 0
			if(numeroPrimo%i==0){
				numeroPrimo = 0;
			}
		}
		//Se o numero primo for diferente de zero, ele adiciona 1 unidade � contagem;
		if(numeroPrimo!=0)
			contagem++;
		
		//Realiza a soma dos numeros primos
		soma = soma+numeroPrimo;
		//Adiciona 1 unidade ao numero primo
		
		aux++;
	}
	printf("Soma = %d.\n", soma);	
	
	return 0;
}
