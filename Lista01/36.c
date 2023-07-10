#include <stdio.h>
#define PI 3.14159265

double calculadoraVolume(float raio, float altura);

int main(void){
    float raio;

    printf("Digite o comprimento do raio: ");
    scanf("%f", &raio);

    float altura;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    double volume = calculadoraVolume(raio, altura);

    printf("Volume do cilindro: %.2lf u.v.\n", volume);

    return 0;
}

double calculadoraVolume(float raio, float altura){
    return PI*raio*raio*altura;
}
