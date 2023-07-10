#include <stdio.h>

double yardsConverter(double length);

int main(void){
    double meters;

    printf("Digite o comprimento em metros: ");
    scanf("%lf", &meters);

    double yards = yardsConverter(meters);

    printf("Comprimento: %.2lf yd\n", yards);

    return 0;
}

double yardsConverter(double length){
    return length/0.91;
}
