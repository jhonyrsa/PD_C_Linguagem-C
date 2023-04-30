#include <stdio.h>

int main(void)
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num%3==0 && num%5!= 0)
        printf("Numero divisivel apenas por 3.\n");
    else if(num%3!=0 && num%5==0)
        printf("Numero divisivel apenas por 5.\n");
    else
        printf("Numero divisivel por 3 e 5 simultaneamente ou nao divisivel pelos dois numeros.\n");

    return 0;
}
