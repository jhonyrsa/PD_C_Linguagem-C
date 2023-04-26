#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, x1, x2, delta;

    printf("\tEQUACAO SEGUNDO GRAU\n");
    printf("Digite o coeficiente 'a': ");
    scanf("%f", &a);

    if(a==0)
        printf("Nao eh equacao do SEGUNDO GRAU.\n");
    else{
        printf("Digite o coeficiente 'b': ");
        scanf("%f", &b);
        printf("Digite o coeficiente 'c': ");
        scanf("%f", &c);

        delta = b*b - 4*a*c;

        if(delta==0){
            x1 = (-b)/(2*a);
            printf("delta = 0, duas raizes iguais.\n");
            printf("x1 = x2 = %.2f.\n", x1);
        }
        else if(delta>0){
            x1 = ((-b)-sqrt(delta))/(2*a);
            x2 = ((-b)+sqrt(delta))/(2*a);
            printf("delta > 0, duas raizes diferentes.\n");
            printf("x1 = %.2f e x2 = %.2f\n", x1, x2);
        }
        else
            printf("delta < 0, nao possui raizes reais.\n");
    }

    return 0;
}
