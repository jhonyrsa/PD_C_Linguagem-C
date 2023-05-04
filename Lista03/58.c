#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//Declaração do início do intervalo
	int inicioIntervalo;
	//Declaração do fim do intervalo
	int fimIntervalo;
	
	//Pergunta e espera o usuário inserir o início do intervalo
	printf("Digite o inicio do intervalo: ");
	scanf("%d", &inicioIntervalo);
	//Pergunta e espera o usuário inserir o fim do intervalo
	printf("Digite o fim do intervalo: ");
	scanf("%d", &fimIntervalo);
	
	//Variáveis contadoras;
	int i, j;
	
	//Variável auxiliar;
	int aux;
	
	//Variável para realizar a soma iterada;
	int soma = 0;
	
	//Iteração do intervalo
	for(j=inicioIntervalo; j<=fimIntervalo; j++){
		//Variável auxiliar recebe o valor que j assume
		aux = j;
		
		//Verificador se eh primo ou nao
		for(i=2; i<aux; i++){
			//Se não for primo, entrará neste caso
			if(aux%i==0){
				//Variável auxiliar receberá o valor de 0
				aux=0;
				//Vai sair da iteração de verificação de primo
				break;
			}
		}
		//Se o valor de auxiliar for maior que 1 ele somará na variável soma
		if(aux>1)
			soma = soma + aux;
	}
	
	//Imprime a soma dos numeros primos no intervalo
	printf("Soma dos numeros primos de [%d ; %d]: %d\n", inicioIntervalo, fimIntervalo, soma);
	
	return 0;
}
