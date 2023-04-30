#include <stdio.h>

int main(void)
{
    int n, i, j, aux;

    printf("Qde de multiplos: ");
    scanf("%d", &n);
    printf("i: ");
    scanf("%d", &i);
    printf("j: ");
    scanf("%d", &j);

    /*
    if(j>i){
        aux = i;
        j = i;
        i = aux;
    }
    */

    int contador, k;

    printf("Sao multiplos:");

    for(k =0; ; k++){
        if(k==0){
            contador = 1;
            if(contador==n){
                printf(" %d.\n", k);
                break;
            }
            else
                printf(" %d,", k);
        }
        else if ((k%i==0)&&(k%j==0)){
            contador = contador+1;
            if(contador==n){
                printf(" %d.\n", k);
                break;
            }
            else
                printf(" %d,", k);
        }
        else if (k%i==0){
            contador = contador+1;
            if(contador==n){
                printf(" %d.\n", k);
                break;
            }
            else
                printf(" %d,", k);
        }
        else if(k%j==0){
            contador = contador+1;
            if(contador==n){
                printf(" %d.\n", k);
                break;
            }
            else
                printf(" %d,", k);
        }
    }

    return 0;
}
