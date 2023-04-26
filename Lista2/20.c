#include <stdio.h>

int main(void)
{
    float lado1, lado2, lado3;

    printf("Verificador de TRIANGULOS e sua classificacao quanto a LADO\n");
    printf("Digite o 1 lado: ");
    scanf("%f", &lado1);
    printf("Digite o 2 lado: ");
    scanf("%f", &lado2);
    printf("Digite o 3 lado: ");
    scanf("%f", &lado3);

    if(lado1<=(lado2+lado3) && lado2<=(lado1+lado3) && lado3<=(lado1+lado2))
        if(lado1==lado2 && lado1==lado3)
            printf("Eh triangulo e eh triangulo equilatero.\n");
        else if((lado1 == lado2 && lado1 != lado3 ) ||(lado1 == lado3 && lado1 != lado2) || (lado2==lado3 && lado2!=lado1))
            printf("Eh triangulo e eh triangulo isosceles.\n");
        else
            printf("Eh triangulo e eh triangulo escaleno.\n");
    else
        printf("Nao eh triangulo.\n");

    return 0;
}
