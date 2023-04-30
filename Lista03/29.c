#include<stdio.h>

int main(void)
{
    int i, j, dobro, fatorialDobro=1;
    float serie=0.0;

    for(i=1; i<=5; i++){
        dobro = 2*i;
        for(j=dobro; j>0;j--)
            fatorialDobro = fatorialDobro*j;
        serie = serie + ((float)i/fatorialDobro);
    }

    printf("S = %.3f\n", serie);

    return 0;
}
