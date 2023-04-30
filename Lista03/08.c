#include <stdio.h>

int main(void)
{
    int num, auxMenor, auxMaior, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    auxMaior = num;
    auxMenor = num;


    for (i=0; i<=9; i++){
        if(auxMaior<num)
            auxMaior = num;
        else if(num<auxMenor)
            auxMenor = num;
        if(i<9){
            printf("Digite um numero: ");
            scanf("%d", &num);
        }
    }

    printf("Maior: %d.\n", auxMaior);
    printf("Menor: %d.\n", auxMenor);

    return 0;
}
