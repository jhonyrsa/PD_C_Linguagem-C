#include <stdio.h>

int main(void){

    float primeiroGanhador = 780000*0.45;
    float segundoGanhador = 780000*0.32;
    float terceiroGanhador = 780000 - (primeiroGanhador + segundoGanhador);

    printf("\tPREMIOS\n");
    printf("Primeiro: R$%.2f\n", primeiroGanhador);
    printf(" Segundo: R$%.2f\n", segundoGanhador);
    printf("Terceiro: R$%.2f\n", terceiroGanhador);
    printf("    Soma: R$%.2f\n", primeiroGanhador+segundoGanhador+terceiroGanhador);

    return 0;
}
