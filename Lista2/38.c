#include <stdio.h>

int main(void)
{
    int ano, mes, dia;

    printf("\tVERIFICADOR DE DATA DE NASCIMENTO DE MILENNIALS\n");
    printf("Insira sua data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(ano>=1982 && ano<=2004){
        if(ano%400==0 || (ano%4==0 && ano%100!=0)){
            if(mes==2){
                if(dia>=1 && dia<=29)
                    printf("data valida\n");
                else
                    printf("data invalida.\n");
            }
            else if(mes==1 || mes==3 || mes == 5 || mes == 7 || mes==8 || mes==10 || mes==12){
                if(dia>=1&&dia<=31)
                    printf("data valida\n");
                else
                    printf("data invalida\n");
            }
            else if(mes==4 || mes==6 || mes==9 || mes ==11){
                if(dia>=1 && dia<=30)
                    printf("data valida\n");
                else
                    printf("data invalida\n");
            }
            else
                printf("data invalida\n");
        }
    //Verificador de anos comuns
        else{
            if(mes==2){
                if(dia>=1 && dia<=28)
                    printf("data valida\n");
                else
                    printf("data invalida.\n");
            }
            else if(mes==1 || mes==3 || mes == 5 || mes == 7 || mes==8 || mes==10 || mes==12){
                if(dia>=1&&dia<=31)
                    printf("data valida\n");
                else
                    printf("data invalida\n");
            }
            else if(mes==4 || mes==6 || mes==9 || mes ==11){
                if(dia>=1 && dia<=30)
                    printf("data valida\n");
                else
                    printf("data invalida\n");
            }
            else
                printf("data invalida\n");
        }
    }
    else
        printf("Data invalida.\nE voce nao eh Milennial.\n");
}
