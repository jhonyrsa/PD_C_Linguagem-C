#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Entrada
	int numero;
	
	//Contagem comum
	int contagem;
	
	//Soma total de numeros digitados
	int soma = 0;
	
	//Soma total de numeros pares
	int somaPares = 0;
	
	//Contagem par
	int contagemPares=0;
	
	//Maior e menor número
	int  maior, menor;
	
	//Média dos numeros digitados e média dos numeros pares
	float mediaGeral, mediaPares;
	
	//Entrada inicial de dados
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//Caso a entrada seja igual a zero, o loop termina
	while(numero!=0){
		//ao iniciar o loop o contador de numeros inicia;
		contagem++;
		
		//se o numero for par, ele entra nesse caso
		if(numero%2==0){
			//conta-se a quantidade de numeros pares digitados, excluindo-se o zero
			contagemPares++;
			//há a soma de todos os pares
			somaPares=somaPares+numero;
		}
		
		//soma de todos os numeros digitadosw
		soma = soma + numero;
		
		//se for o primeiro numero digitado, maior e menor receberão atribuições
		if(contagem==1){
			maior = numero;
			menor = numero;
		}
		/**
		Caso não seja o primeiro numero digitado, haverão comparações para que seja 
		possível substituir o valor dentro das variáveis
		*/
		else{
			//se o numero da iteração for maior que o que está na variável maior
			//essa será substituida
			if(maior<numero)
				maior=numero;
			//se o numero da iteração for menor que o que está na variável menor
			//essa será substituída
			else if(menor>numero)
				menor=numero;
		}
		
		//nova entrada de dados é realizada para se verificar se o loop continuará
		printf("Digite um numero: ");
		scanf("%d", &numero);
	}
	
	//A media geral e a média dos numeros pares é calculada
	mediaGeral = (float)soma/contagem;
	mediaPares = (float)somaPares/contagemPares;
	
	//Há a saída de dados
	printf("\n(a) Soma geral = %d\n", soma);
	printf("(b) Quantidade de numeros: %d\n",contagem);
	printf("(c) Media dos numeros = %.2f\n", mediaGeral);
	printf("(d) Maior numero: %d\n", maior);
	printf("(e) Menor numero: %d\n", menor);
	printf("(f) Media dos numeros pares = %.2f\n", mediaPares);
	
	//Programa finaliza
	return 0;
}
