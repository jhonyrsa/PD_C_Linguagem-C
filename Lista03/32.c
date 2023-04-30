#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int d1, d2, n, i;

    printf("Digite a quantidade de vezes que o dado deve ser lancado: ");
    scanf("%d", &n);

    srand((unsigned)time(NULL));

    for(i=1; i<=n; i++){

        d1 = 1 + (rand()%6);
        d2 = 1 + (rand()%6);

        if(d1>d2)
            printf("%2do lancamento: d1 = %d > d2 = %d\n", i, d1, d2);
        else if(d1<d2)
            printf("%2do lancamento: d1 = %d < d2 = %d\n", i, d1, d2);
        else
            printf("%2do lancamento: d1 = %d = d2 = %d\n", i, d1, d2);
    }

    getch();

    return 0;
}
