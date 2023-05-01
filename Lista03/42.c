#include <stdio.h>
#include <math.h>

int main(void)
{
    float num, quadrado, cubo, raiz;

    printf("Digite um numero: ");
    scanf("%f", &num);

    while(1){
        if(num<=0){
            printf("Numero <= 0 digitado.\n");
            break;
        }
        else{
            quadrado = num*num;
            cubo = quadrado*num;
            raiz = sqrt(num);
            printf("%.2f^2 = %.2f\n", num, quadrado);
            printf("%.2f^3 = %.2f\n", num, cubo);
            printf("raiz(%.2f) = %.2f\n\n", num, raiz);
        }
        printf("Digite um numero: ");
        scanf("%f", &num);
    }

    return 0;
}
