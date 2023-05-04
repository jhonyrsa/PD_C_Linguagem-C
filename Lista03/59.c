#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	int numeroHabitantes;
	
	int opcao;
	
	float consumoResidencial = 0.0, valorConsumo;
	float consumoComercial = 0.0;
	float consumoIndustrial = 0.0;
	
	float leitura;
	
	float auxMenor;
	float auxMaior;
	
	float soma = 0.0;
	
	float media = 0.0;
	
	float valorkWh;
	
	int i;
	
	printf("Digite a quantidade de habitantes da cidade: ");
	scanf("%d", &numeroHabitantes);
	printf("Digite o valor do kWh: ");
	scanf("%f", &valorkWh);
	
	printf("\n");
	
	for (i=1; i<=numeroHabitantes; i++){
		printf("Escolha a opção desejada para o consumo\n");
		printf("1 - Residencial\n2 - Comercial\n3 - Industrial\nOpção: ");
		scanf("%d", &opcao);
		
	
		switch(opcao){
			case 1:
				printf("Digite o consumo Residencial: ");
				scanf("%f", &leitura);
				consumoResidencial = consumoResidencial + leitura;
				valorConsumo = leitura*valorkWh;
				printf("Valor Consumido: R$%.2f\n\n", valorConsumo);		
				break;
			case 2:
				printf("Digite o consumo Comercial: ");
				scanf("%f", &leitura);
				consumoComercial = consumoComercial + leitura;
				valorConsumo = leitura*valorkWh;	
				printf("Valor Consumido: R$%.2f\n\n", valorConsumo);	
				break;
			case 3:
				printf("Digite o consumo Industrial: ");
				scanf("%f", &leitura);
				consumoIndustrial = consumoIndustrial + leitura;
				valorConsumo = leitura*valorkWh;
				printf("Valor Consumido: R$%.2f\n\n", valorConsumo);		
				break;
			default:
				printf("Opção desconhecida\n\n");
				i--;
			}
			if(i==1){
				auxMenor = leitura;
				auxMaior = leitura;
			}
			if(auxMenor>leitura)
				auxMenor = leitura;
			if(auxMaior<leitura)
				auxMaior = leitura;
		}
	soma = consumoResidencial+consumoComercial + consumoIndustrial;
	
	media = soma/numeroHabitantes;
	
	printf("\n");
	valorConsumo = media*valorkWh;
	printf("Consumo Médio da cidade R$ %.2f\n", valorConsumo);
	valorConsumo = auxMenor*valorkWh;
	printf("Menor consumo da cidade R$ %.2f\n", valorConsumo);
	valorConsumo = auxMaior*valorkWh;
	printf("Maior consumo da cidade R$ %.2f\n\n", valorConsumo);
	valorConsumo = consumoResidencial*valorkWh;
	printf("Consumo Residencial R$ %3.2f\n", valorConsumo);
	valorConsumo = consumoComercial*valorkWh;
	printf("Consumo Comercial   R$ %3.2f\n", valorConsumo);
	valorConsumo = consumoIndustrial*valorkWh;
	printf("Consumo Industrial  R$ %3.2f\n", valorConsumo);
	
	return 0;
}
