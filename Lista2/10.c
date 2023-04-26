#include <stdio.h>

int main (void)
{
    float altura, peso;
    char sexo;

    printf("Digite o sexo da pessoa (m ou h): ");
    scanf("%c", &sexo);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    switch(sexo){
        case 'M':
        case 'm':
            peso = (62.1*altura)-44.7;
            break;
        case 'H':
        case 'h':
            peso = (72.7*altura)-58;
            break;
    }
    printf("O peso ideal eh %.2f kg.\n", peso);

    return 0;
}
