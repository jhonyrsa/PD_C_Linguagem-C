#include <stdio.h>

int main(void)
{
    int num;

    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("Segunda.\n");
            break;
        case 2:
            printf("Terca.\n");
            break;
        case 3:
            printf("Quarta.\n");
            break;
        case 4:
            printf("Quinta.\n");
            break;
        case 5:
            printf("Sexta.\n");
            break;
        case 6:
            printf("Sabado.\n");
            break;
        case 7:
            printf("Domingo.\n");
            break;
        default:
            printf("Numero invalido.\n");
    }

    return 0;
}
