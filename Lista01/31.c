#include <stdio.h>

int seuAntecessor(int num);
int seuSucessor(int num);

int main(void){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int antecessor = seuAntecessor(numero);
    printf("Antecessor: %d\n", antecessor);
    int sucessor = seuSucessor(numero);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}

int seuAntecessor(int num){return num-1;}

int seuSucessor(int num){return num+1;}
