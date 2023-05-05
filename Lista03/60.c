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
	
	//Maior e menor n�mero
	int  maior, menor;
	
	//M�dia dos numeros digitados e m�dia dos numeros pares
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
			//h� a soma de todos os pares
			somaPares=somaPares+numero;
		}
		
		//soma de todos os numeros digitadosw
		soma = soma + numero;
		
		//se for o primeiro numero digitado, maior e menor receber�o atribui��es
		if(contagem==1){
			maior = numero;
			menor = numero;
		}
		/**
		Caso n�o seja o primeiro numero digitado, haver�o compara��es para que seja 
		poss�vel substituir o valor dentro das vari�veis
		*/
		else{
			//se o numero da itera��o for maior que o que est� na vari�vel maior
			//essa ser� substituida
			if(maior<numero)
				maior=numero;
			//se o numero da itera��o for menor que o que est� na vari�vel menor
			//essa ser� substitu�da
			else if(menor>numero)
				menor=numero;
		}
		
		//nova entrada de dados � realizada para se verificar se o loop continuar�
		printf("Digite um numero: ");
		scanf("%d", &numero);
	}
	
	//A media geral e a m�dia dos numeros pares � calculada
	mediaGeral = (float)soma/contagem;
	mediaPares = (float)somaPares/contagemPares;
	
	//H� a sa�da de dados
	printf("\n(a) Soma geral = %d\n", soma);
	printf("(b) Quantidade de numeros: %d\n",contagem);
	printf("(c) Media dos numeros = %.2f\n", mediaGeral);
	printf("(d) Maior numero: %d\n", maior);
	printf("(e) Menor numero: %d\n", menor);
	printf("(f) Media dos numeros pares = %.2f\n", mediaPares);
	
	//Programa finaliza
	return 0;
}
