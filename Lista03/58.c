#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//Declara��o do in�cio do intervalo
	int inicioIntervalo;
	//Declara��o do fim do intervalo
	int fimIntervalo;
	
	//Pergunta e espera o usu�rio inserir o in�cio do intervalo
	printf("Digite o inicio do intervalo: ");
	scanf("%d", &inicioIntervalo);
	//Pergunta e espera o usu�rio inserir o fim do intervalo
	printf("Digite o fim do intervalo: ");
	scanf("%d", &fimIntervalo);
	
	//Vari�veis contadoras;
	int i, j;
	
	//Vari�vel auxiliar;
	int aux;
	
	//Vari�vel para realizar a soma iterada;
	int soma = 0;
	
	//Itera��o do intervalo
	for(j=inicioIntervalo; j<=fimIntervalo; j++){
		//Vari�vel auxiliar recebe o valor que j assume
		aux = j;
		
		//Verificador se eh primo ou nao
		for(i=2; i<aux; i++){
			//Se n�o for primo, entrar� neste caso
			if(aux%i==0){
				//Vari�vel auxiliar receber� o valor de 0
				aux=0;
				//Vai sair da itera��o de verifica��o de primo
				break;
			}
		}
		//Se o valor de auxiliar for maior que 1 ele somar� na vari�vel soma
		if(aux>1)
			soma = soma + aux;
	}
	
	//Imprime a soma dos numeros primos no intervalo
	printf("Soma dos numeros primos de [%d ; %d]: %d\n", inicioIntervalo, fimIntervalo, soma);
	
	return 0;
}
