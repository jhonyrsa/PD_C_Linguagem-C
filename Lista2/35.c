#include <stdio.h>

int main(void)
{
    int dia, mes, ano;

    printf("\n\tVALIDADOR DE DATAS\n");
    printf("Infome a data a ser verificada (dd/mm/aaaa): ");
    scanf("%d / %d / %d", &dia, &mes, &ano);

    //Verificador para anos bissextos
    if(ano%400==0 || (ano%4==0 && ano%100!=0)){
        if(mes==2){
            if(dia>=1 && dia<=29)
                printf("Data digitada eh VALIDA\n");
            else
                printf("Data digitada eh INVALIDA.\nO dia informado nao existe para o mes informado\n");
        }
        else if(mes==1 || mes==3 || mes == 5 || mes == 7 || mes==8 || mes==10 || mes==12){
            if(dia>=1&&dia<=31)
                printf("Data digitada eh VALIDA\n");
            else
                printf("Data digitada eh INVALIDA.\nO dia informado nao existe para o mes informado\n");
        }
        else if(mes==4 || mes==6 || mes==9 || mes ==11){
            if(dia>=1 && dia<=30)
                printf("Data digitada eh VALIDA\n");
            else
                printf("Data digitada eh INVALIDA.\nO dia informado nao existe para o mes informado\n");
        }
        else
            printf("Data digitada eh INVALIDA\nO mes informado nao existe\n");
    }
    //Verificador de anos comuns
    else{
        if(mes==2){
            if(dia>=1 && dia<=28)
                printf("Data digitada eh VALIDA\n");
            else
                printf("Data digitada eh INVALIDA.\nO dia informado nao existe para o mes informado\n");
        }
        else if(mes==1 || mes==3 || mes == 5 || mes == 7 || mes==8 || mes==10 || mes==12){
            if(dia>=1&&dia<=31)
                printf("Data digitada eh VALIDA\n");
            else
                printf("Data digitada eh INVALIDA.\nO dia informado nao existe para o mes informado\n");
        }
        else if(mes==4 || mes==6 || mes==9 || mes ==11){
            if(dia>=1 && dia<=30)
                printf("Data digitada eh VALIDA\n");
            else
                printf("Data digitada eh INVALIDA.\nO dia informado nao existe para o mes informado\n");
        }
        else
            printf("Data digitada eh INVALIDA\nO mes informado nao existe\n");
    }

    return 0;
}
