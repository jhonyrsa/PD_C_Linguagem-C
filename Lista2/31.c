#include <stdio.h>

int main(void)
{
    float massa, altura;

    printf("Digite a massa (kg): ");
    scanf("%f", &massa);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if(massa<=60.0){
        if(altura<1.2)
            printf("Classificacao A\n");
        else if(altura>=1.2 && altura<=1.7)
            printf("Classificacao B\n");
        else
            printf("Classificacao C\n");
    }
    else if(massa>60.0 && massa<=90.0){
        if(altura<1.2)
            printf("Classificacao D\n");
        else if(altura>=1.2 && altura<=1.7)
            printf("Classificacao E\n");
        else
            printf("Classificacao F\n");
    }
    else{
        if(altura<1.2)
            printf("Classificacao G\n");
        else if(altura>=1.2 && altura<=1.7)
            printf("Classificacao H\n");
        else
            printf("Classificacao I\n");
    }

    return 0;
}
