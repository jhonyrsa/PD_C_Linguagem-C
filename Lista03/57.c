#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declara��o dos intervalos necess�rios para verifica��o dos numeros primos;
	int inicioIntervalo, fimIntervalo;
	
	//Entrada do intervalo a ser verificado.
	//Inicio do intervalo
	printf("Digite o inicio do intervalo: ");
	scanf("%d", &inicioIntervalo);
	
	//Fim do intervalo
	printf("Digite o fim do intervalo: ");
	scanf("%d", &fimIntervalo);
	
	//Vari�vel contadora de numeros primos, inicializada com 0
	int contaPrimo=0;
	
	//Contadora geral
	int i,j;
	
	//Vari�vel auxiliar
	int aux;
	
	for(j = inicioIntervalo; j <= fimIntervalo; j++){
		//variavel auxiliar recebe j da itera��o
		aux = j;
		
		//nova itera��o come�a com o novo valor de auxiliar
		for(i=2;i<aux;i++){
			//se algum valor de i dividir a variavel auxiliar, ela entra no caso
			if(aux%i==0){
				//auxiliar recebe o valor de zero
				aux=0;
				//sai da itera��o por n�o se tratar de numero primo
				break;
			}
		}
		//se a variavel auxiliar for testada e for diferente de zero, o contador vai adicionar 1 unidade para contar
		if(aux>1)
			contaPrimo++;
	}
	
	//Apresenta a quantidade de numeros primos existentes no intervalo informado
	printf("No intervalo [%d; %d] possui %d numeros primos\n", inicioIntervalo, fimIntervalo, contaPrimo);	
	
	return 0;
}
