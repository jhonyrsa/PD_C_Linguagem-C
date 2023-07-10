#include <stdio.h>

int main(void){

    int num1, num2, num3, sum=0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    sum = num1+num2+num3;

    printf("Soma = %d\n", sum);

    return 0;

}
