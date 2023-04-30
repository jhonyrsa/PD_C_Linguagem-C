#include <stdio.h>

int main(void)
{
    int maior, menor, num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while(1){
        if(num<0)
            break;
        else{
            if(num>maior)
                maior = num;
            else if(num<menor)
                menor = num;
        }
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}
