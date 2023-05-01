#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned) time(NULL));

    int num = 1 + (rand()%1000);
    int tentativa, contagem=0;

    while(1){
        printf("Adivinhe o numero (1-1000): ");
        scanf("%d", &tentativa);
        if(tentativa!=num){
            contagem++;
            if(num>tentativa)
                printf("O numero procurado eh maior\n");
            else if(num<tentativa)
                printf("O numero procurado eh menor\n");
        }
        else{
            contagem++;
            printf("Numero correto!\n");
            printf("Houveram %d tentativas ate acertar.\n", contagem);
            break;
        }
    }

    return 0;
}
