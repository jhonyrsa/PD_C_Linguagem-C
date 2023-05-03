#include <stdio.h>

int main(void){

    int iMax, numero;

    iMax = numero = 20;

    int i, achou =0;

    while(achou==0){
        achou=1;
        for(i=2; i<=iMax; i++){
            if(numero%i != 0){
                achou = 0;
                break;
            }
        }
        if(achou == 1)
            printf("Numero = %d\n", numero);
        else
            numero = numero + 2;
    }

    getch();

    return 0;
}
