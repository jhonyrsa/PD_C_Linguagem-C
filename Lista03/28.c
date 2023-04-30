#include <stdio.h>

int main(void)
{
    int n, i, j, N=1;
    float E=1.0;

    printf("Digite um numero N>0 (Z): ");
    scanf("%d", &n);

    for(i=n; i>0; i--){
        for(j=i;j>0;j--){
           N = N*j;
        }
        E = E +(1.0/N);
        N = 1;
    }

    printf("E = %.3f.\n", E);

    return 0;
}
